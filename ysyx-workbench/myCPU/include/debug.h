#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <cstdio>
#include <utils.h>
#include <assert.h>

#define Assert(cond, format, ...) \
	do { \
		if(!(cond)) { \
			printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__ );\
			assert((unsigned long)cond);\
		}\
	} while(0);


#endif