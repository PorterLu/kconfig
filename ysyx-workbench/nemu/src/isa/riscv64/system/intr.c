#include <isa.h>
#include <../local-include/reg.h>

extern riscv64_CSR csr;

void add_etrace(uint32_t NO, paddr_t epc, uint32_t args);
word_t isa_raise_intr(word_t NO, vaddr_t epc, uint32_t args) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  add_etrace(NO, epc, args);
  csr.mepc = epc;
  csr.mcause = NO;
  return csr.mtvec;

}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
