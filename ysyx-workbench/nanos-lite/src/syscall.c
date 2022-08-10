#include <common.h>
#include "syscall.h"

uint32_t do_write(int fd, void* buf, uint32_t len){
	if(fd == 1 || fd == 2){
		for(int i = 0; i < len; i++)
			putch(*((char*)buf + i));
	}

	return len;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //printf("\n%d\n", a[3]);
  switch (a[0]) {
	case SYS_yield: yield(); break;
	case SYS_exit: halt(0); break;
	case SYS_write:c->GPRx = do_write(a[1], (void*)a[2], a[3]);break;
	case SYS_brk: c->GPRx = 0; break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  //asm("add a0,x0,%0"::"r"(ans)); 
  c->mepc += 4;
  
}
 