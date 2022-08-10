#include <state.h>
#include <stdint.h>

nemu_state state;
static bool is_bad = false;

void set_bad(){
	is_bad = true;
}

bool status(){
	return  is_bad;
}