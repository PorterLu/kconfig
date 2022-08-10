#include <cpu/cpu.h>
#include <isa-def.h>

extern riscv64_CSR csr;
void sdb_mainloop();

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  csr.mstatus = 0xa00001800;
  sdb_mainloop();
#endif
}

