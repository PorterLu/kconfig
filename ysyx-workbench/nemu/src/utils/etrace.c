#include <common.h>
#include <stdlib.h>

char* findFunc(uint64_t addr);

typedef struct etrace_element{
	uint32_t NO;
	paddr_t pc;
	uint32_t depth;
	uint32_t args;
	struct etrace_element * next;
} etrace_element;

etrace_element *etrace_head = NULL, *etrace_tail = NULL;

void add_etrace(uint32_t NO, paddr_t pc, uint32_t args){
	etrace_element *pointer = malloc(sizeof(etrace_element));
	pointer->NO = NO;
	pointer->pc = pc;
	pointer->args = args;
	pointer->next = NULL;
	if(etrace_head == NULL && etrace_tail == NULL){
		etrace_head = etrace_tail = pointer;
	}else{
		etrace_tail->next = pointer;
		etrace_tail = pointer;
	}

}

void print_etrace(){
	etrace_element *pointer = etrace_head;
	while(pointer != NULL){
		printf("Exception No:%d 0x%08x %s\n",pointer->NO, pointer->pc, findFunc(pointer->pc));
		pointer = pointer->next;
	}
}

void print_strace(){
	etrace_element *pointer = etrace_head;
	while(pointer != NULL){
		if(pointer->NO == 2){
			printf("Syscall %d at 0x%08x %s\n", pointer-> args, pointer->pc, findFunc(pointer->pc));
		}
		
		pointer = pointer->next;
	}
}

void delete_etrace(){
	etrace_element *pointer;
	while(etrace_head){
		pointer = etrace_head;
		etrace_head = etrace_head->next;
		free(pointer);
	}
}