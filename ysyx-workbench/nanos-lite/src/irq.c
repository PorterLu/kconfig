#include <common.h>

#define SYSTEM_CALL 2

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
	case SYSTEM_CALL:  do_syscall(c);break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
 