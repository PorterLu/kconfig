#include <common.h>
#include <debug.h>
#include <cstdlib>
#include <elf.h>
#include <cstring>
#include <elftl.h>

static char *strtab = NULL;
static Elf64_Sym *symtab = NULL;
static int nr_symtab_entry;

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

void init_elf(const char* elf_file)
{
	int ret;
	assert(elf_file != NULL);

	FILE *fp = fopen(elf_file, "rb");
	Assert(fp, "Can not open elf_file");

	uint8_t buf[sizeof(Elf64_Ehdr)];
	ret = fread(buf, sizeof(Elf64_Ehdr), 1, fp);
	assert(ret == 1);

	Elf64_Ehdr *elf = (Elf64_Ehdr *) buf;
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
	Elf64_Shdr *sh = (Elf64_Shdr*)malloc(sh_size);
	fseek(fp, elf->e_shoff, SEEK_SET);
	ret = fread(sh, sh_size, 1, fp);
	assert(ret == 1);

	char *shstrtab =(char*)malloc(sh[elf->e_shstrndx].sh_size);
	fseek(fp, sh[elf->e_shstrndx].sh_offset, SEEK_SET);
	ret = fread(shstrtab, sh[elf->e_shstrndx].sh_size, 1, fp);
	assert(ret == 1);

	int i;
	for(i=0; i < elf->e_shnum; i++)
	{
		if(sh[i].sh_type == SHT_SYMTAB && strcmp(shstrtab + sh[i].sh_name, ".symtab") == 0)
		{
			symtab = (Elf64_Sym*)malloc(sh[i].sh_size);
			fseek(fp, sh[i].sh_offset, SEEK_SET);
			ret = fread(symtab, sh[i].sh_size, 1, fp);
			assert(ret == 1);
			nr_symtab_entry = sh[i].sh_size / sizeof(symtab[0]);
		}
		else if(sh[i].sh_type == SHT_STRTAB && strcmp(shstrtab + sh[i].sh_name, ".strtab") == 0)
		{
			strtab = (char*)malloc(sh[i].sh_size);
			fseek(fp,sh[i].sh_offset,SEEK_SET);
			ret = fread(strtab,sh[i].sh_size, 1, fp);
			assert(ret == 1);
		}
	}

	free(sh);
	free(shstrtab);

	assert(strtab != NULL && symtab != NULL);

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
		if(addr >= symtab[i].st_value && addr < symtab[i].st_value + symtab[i].st_size)
			return &strtab[symtab[i].st_name];
	}
	return NULL;
}

void add_ftrace(uint64_t addr, bool is_call)
{
	ftrace_element *pointer = (ftrace_element*)malloc(sizeof(ftrace_element));
	pointer->addr = addr;
	pointer->is_call = is_call;
	pointer->func_name = findFunc(addr);
	
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
	{
		tail = head = pointer;
		pointer->next = NULL;
	}
	else
	{
		tail->next = pointer;
		tail = pointer;
		pointer->next = NULL;
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