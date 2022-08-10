#include <common.h>
#include <debug.h>
#include <stdlib.h>
#include <elf.h>

static char *strtab = NULL;
static Elf64_Sym *symtab = NULL;
static int nr_symtab_entry;
static char *strtab_program = NULL;
static Elf64_Sym *symtab_program = NULL;
static int nr_symtab_entry_program;
static int depth = 0;

typedef struct ftrace_element{
	char *func_name;
	uint64_t addr;
	bool is_call;
	int depth;
	struct ftrace_element *next;
} ftrace_element;

ftrace_element *head = NULL;
ftrace_element *tail = NULL;

uint8_t* guest_to_host(paddr_t paddr);

uint64_t findSym(char *name);
void elf_program();

void init_elf(const char* elf_file)
{
	int ret;
	assert(elf_file != NULL);

	FILE *fp = fopen(elf_file, "rb");
	Assert(fp, "Can not open elf_file");

	uint8_t buf[sizeof(Elf64_Ehdr)];
	ret = fread(buf, sizeof(Elf64_Ehdr), 1, fp);
	assert(ret == 1);

	Elf64_Ehdr *elf = (void*) buf;
	char magic[] = {ELFMAG0, ELFMAG1, ELFMAG2, ELFMAG3};

	assert(memcmp(elf->e_ident, magic, 4) == 0);
	assert(elf->e_ident[EI_CLASS] == ELFCLASS64);
	assert(elf->e_ident[EI_DATA] == ELFDATA2LSB);
	assert(elf->e_ident[EI_VERSION] == EV_CURRENT);
	assert(elf->e_ident[EI_OSABI] == ELFOSABI_SYSV || elf->e_ident[EI_OSABI] == ELFOSABI_LINUX);
	assert(elf->e_ident[EI_ABIVERSION] == 0);
	assert(elf->e_type == ET_EXEC);
	//assert(elf->e_machine == EM_386);
	assert(elf->e_version == EV_CURRENT);

	uint64_t sh_size = elf->e_shentsize * elf->e_shnum;
	Elf64_Shdr *sh = malloc(sh_size);
	fseek(fp, elf->e_shoff, SEEK_SET);
	ret = fread(sh, sh_size, 1, fp);
	assert(ret == 1);

	char *shstrtab = malloc(sh[elf->e_shstrndx].sh_size);
	fseek(fp, sh[elf->e_shstrndx].sh_offset, SEEK_SET);
	ret = fread(shstrtab, sh[elf->e_shstrndx].sh_size, 1, fp);
	assert(ret == 1);

	int i;
	for(i=0; i < elf->e_shnum; i++)
	{
		if(sh[i].sh_type == SHT_SYMTAB && strcmp(shstrtab + sh[i].sh_name, ".symtab") == 0)
		{
			symtab = malloc(sh[i].sh_size);
			fseek(fp, sh[i].sh_offset, SEEK_SET);
			ret = fread(symtab, sh[i].sh_size, 1, fp);
			assert(ret == 1);
			nr_symtab_entry = sh[i].sh_size / sizeof(symtab[0]);
		}
		else if(sh[i].sh_type == SHT_STRTAB && strcmp(shstrtab + sh[i].sh_name, ".strtab") == 0)
		{
			strtab = malloc(sh[i].sh_size);
			fseek(fp,sh[i].sh_offset,SEEK_SET);
			ret = fread(strtab,sh[i].sh_size, 1, fp);
			assert(ret == 1);
		}
	}


	uint8_t buf_disk[4096];
	uint64_t ramdisk_start = findSym("ramdisk_start");

	if(ramdisk_start != -1)
	{
		memcpy(buf_disk, guest_to_host(ramdisk_start), 4096);

		Elf64_Ehdr *elf_ramdisk = (void*)buf_disk;

		uint64_t sh_ramdisk_size = elf_ramdisk->e_shentsize * elf_ramdisk->e_shnum;

		Elf64_Shdr *sh_ramdisk = malloc(sh_ramdisk_size);
		memcpy(sh_ramdisk, guest_to_host(ramdisk_start + elf_ramdisk->e_shoff), sh_ramdisk_size);

		char *shstrtab_program = malloc(sh[elf_ramdisk->e_shstrndx].sh_size);
		memcpy(shstrtab_program, guest_to_host(ramdisk_start + sh_ramdisk[elf_ramdisk->e_shstrndx].sh_offset), sh_ramdisk[elf_ramdisk->e_shstrndx].sh_size);

		for(int i = 0; i < elf_ramdisk->e_shnum; i++){
			if(sh_ramdisk[i].sh_type == SHT_SYMTAB && (strcmp(shstrtab_program + sh_ramdisk[i].sh_name, ".symtab") == 0)){
				symtab_program = malloc(sh_ramdisk[i].sh_size);
				memcpy(symtab_program, guest_to_host(ramdisk_start + sh_ramdisk[i].sh_offset), sh_ramdisk[i].sh_size);
				nr_symtab_entry_program = sh_ramdisk[i].sh_size/(sizeof(symtab_program[0]));
			}else if(sh_ramdisk[i].sh_type == SHT_STRTAB && (strcmp(shstrtab_program + sh_ramdisk[i].sh_name, ".strtab") == 0)){
				strtab_program = malloc(sh_ramdisk[i].sh_size);
				memcpy(strtab_program, guest_to_host(ramdisk_start + sh_ramdisk[i].sh_offset), sh_ramdisk[i].sh_size);
			
			}
		}
		free(sh_ramdisk);
	}


	free(sh);
	free(shstrtab);
	assert(symtab != NULL && strtab != NULL);
	assert(strtab != NULL && symtab != NULL);
	//assert(strtab_program != NULL && symtab_program != NULL);
	fclose(fp);
}

//通过函数名，找到的地址
uint64_t findSym(char *name){
	int i;
	for(i=0; i<nr_symtab_entry; i++)
		if(strcmp(&strtab[symtab[i].st_name],name) == 0)
			return symtab[i].st_value;
	return -1;
}



//在64位地址空间可以使用指针
//findFunc通过地址找到对应的函数名
char* findFunc(uint64_t addr)
{
	int i;
	for(i=0; i<nr_symtab_entry; i++)
	{
		if(addr >= symtab[i].st_value && addr <= symtab[i].st_value + symtab[i].st_size)
			return &strtab[symtab[i].st_name];
	}

	for(i = 0; i < nr_symtab_entry_program; i++){
		if(addr >= symtab_program[i].st_value && addr <= symtab_program[i].st_value + symtab_program[i].st_size)
			return &strtab_program[symtab_program[i].st_name];
	}

	return NULL;
}

void add_ftrace(uint64_t addr, bool is_call)
{
	ftrace_element *pointer = malloc(sizeof(ftrace_element));
	pointer->addr = addr;
	pointer->is_call = is_call;
	pointer->func_name = findFunc(addr);
	pointer->next = NULL;
	
	if(is_call)
	{
		pointer->depth = depth;
		depth ++;
	}
	else
	{
		depth --;
		pointer->depth = depth;
	}
	
	if(head == NULL && tail == NULL)
		tail = head = pointer;
	else
	{
		tail->next = pointer;
		tail = pointer;
	}

}

void delete_ftrace()
{
	while(head)
	{
		ftrace_element *pointer = head;
		head = head->next;
		free(pointer);
	}
}

void print_ftrace()
{
	ftrace_element * pointer = head;
	while(pointer)
	{
		int i;
		for(i = 0;i < pointer->depth; i++)
			printf("   ");

		if(pointer->is_call)
			printf("call ");
		else
			printf("ret ");
		
		printf("%s ",pointer->func_name);
		printf("[%016lx]\n",pointer->addr);
		pointer = pointer->next;
	}
}