#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

typedef struct dtrace{
	const char *name;
	uint64_t addr;
	bool is_write;
	struct dtrace* next;
} dtrace;

static dtrace *head, *tail;

void add_dtrace(const char *name, uint64_t addr, bool is_wirte){
	dtrace *pointer = (dtrace*)malloc(sizeof(dtrace));
	pointer->name = name;
	pointer->addr = addr;
	pointer->is_write = is_wirte;
	pointer->next = NULL;

	if(head == NULL && tail == NULL){
		head = tail = pointer;
	}else{
		tail->next = pointer;
		tail = pointer;
	}
}

void delete_dtrace(){
	dtrace *pointer;
	while(head != NULL){
		pointer = head;
		head = head->next;
		free(pointer);
	}
}

void dtrace_print(){
	dtrace *pointer = head;
	while(pointer != NULL){
		printf("Name:%-20s addr:%-20lx ", pointer->name, pointer->addr);
		if(pointer->is_write) printf("w\n"); else printf("r\n");
		pointer = pointer->next;
	}
}

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}


static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  //printf("%x %x %x %x\n", addr, len, map->low, map->high);
  check_bound(map, addr);
  add_dtrace(map->name, addr, false);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  //if(map == NULL) { printf("\n%x %x\n",addr, len);}
  //printf("%x %x %x %x\n", addr, len, map->low, map->high);
  //check_bound(map, addr);
  if(map == NULL || addr > map->high || addr < map->low){
	nemu_state.state = NEMU_ABORT; 
	nemu_state.halt_pc = cpu.pc;
	Log("address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD , addr, cpu.pc);
	return;
}
  add_dtrace(map->name, addr, true);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}
