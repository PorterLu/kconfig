#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <stdlib.h>
#include <errno.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

static FILE *memFile;

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
#ifdef CONFIG_MEM_TRACE
	memFile = fopen("mtrace.txt","wb+");
#endif
}

void memlog_print(paddr_t start, word_t scope, char* type)
{
	
	char rw[2];
	paddr_t addr;
	int len;
	word_t data;
	paddr_t up_bound = start + scope;
	
	fseek(memFile, 0, SEEK_SET);
	while(fscanf(memFile, "%s %x %d %lx", rw, &addr, &len, &data) != EOF)
	{
		if((strcmp(rw,type) == 0 || strcmp(type, "a") == 0)&& ((addr > start && addr < up_bound) || (addr+len < up_bound && addr+len > start)))
			printf("%s addr:%016x  len:%-8d  data:%-16lx\n", rw, addr, len, data);
	}

}

void memlog_record(paddr_t addr, int len, word_t data, bool iswrite)
{
	if(iswrite) fprintf(memFile, "w 0x%x %d 0x%lx\n", addr, len, data);
	else fprintf(memFile, "r 0x%x %d 0x%lx\n", addr,len, data);
}

void memlog_close()
{
#ifdef CONFIG_MEM_TRACE
	fclose(memFile);
#endif
}

word_t paddr_read(volatile paddr_t addr, int len) {
  if (likely(in_pmem(addr))) 
  {
	word_t data = pmem_read(addr, len);
#ifdef CONFIG_MEM_TRACE
	memlog_record(addr, len, data, false);
#endif
	return data;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(volatile paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr)))
  {
	 pmem_write(addr, len, data);
#ifdef CONFIG_MEM_TRACE
	 memlog_record(addr, len, data, true);
#endif 
	 return; 
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
