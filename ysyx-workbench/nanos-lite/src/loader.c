#include <proc.h>
#include <elf.h>
#include <debug.h>
#include <string.h>

#define ELF_OFFSET_IN_DISK 0

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
	Elf64_Ehdr *elf;
	Elf64_Phdr *ph = NULL;

	uint8_t buf[4096];
	ramdisk_read(buf, ELF_OFFSET_IN_DISK, 4096);
	elf = (void*)buf;

	const uint32_t elf_magic = 0x464c457f;
	assert(*(uint32_t *)elf->e_ident == elf_magic);

	uint64_t e_phoff = elf->e_phoff;
	uint64_t e_phensize = elf->e_phentsize;
	uint64_t e_phnum = elf->e_phnum;

	for(int i = 0; i < e_phnum; i++){
		ph = (void*)buf + e_phoff + i * e_phensize;
		if(ph->p_type == PT_LOAD){
			uint64_t p_vaddr = ph->p_vaddr;
			uint64_t p_offset = ph->p_offset;
			uint64_t p_filesz = ph->p_filesz;
			uint64_t p_memsz = ph->p_memsz;
			ramdisk_read((uint8_t*) p_vaddr, p_offset + ELF_OFFSET_IN_DISK, p_filesz);
			memset((uint8_t*) (p_vaddr + p_filesz), 0, p_memsz - p_filesz + ELF_OFFSET_IN_DISK);
		}
	}

  	return elf->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %d", entry);
  ((void(*)())entry) ();
}

