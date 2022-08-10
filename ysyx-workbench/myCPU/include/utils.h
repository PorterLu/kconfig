#ifndef __UTILS_H__
#define __UTILS_h__

#define ANSI_FG_RED 	"\33[1;31m"
#define ANSI_FG_GREEN 	"\33[1;32m"
#define ANSI_FG_BLUE	"\33[1;34m"
#define ANSI_NONE		"\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define RESET_VECTOR 0x80000000
#define ARRLEN(arr) sizeof(arr)/sizeof(arr[0])

#endif