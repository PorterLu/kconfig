#include <common.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <debug.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
void memlog_close();
void delete_ftrace();
void delete_dtrace();
void delete_etrace();
uint64_t expr(char*e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();
  
  memlog_close();
  
  delete_ftrace();

  delete_etrace();

  delete_dtrace();
  
  return is_exit_status_bad();

/*
  FILE *file = fopen("out.txt","r");
  char tmp[65536];
  char *expression;
  char *ans;
  bool success = true;
  uint64_t value;
  int count = 0;
  while(fgets(tmp, sizeof(tmp), file))
  {
    ans = strtok(tmp," ");
    expression = strtok(NULL," ");
    *(expression + strlen(expression)-1) = '\0';
    sscanf(ans,"%lu",&value);
    uint64_t result = expr(expression, &success);
    if(success == true)
    {
      if(result == value)
      {
        count ++;
        printf(ANSI_FMT("%s result is %lu == ans %lu\n", ANSI_FG_GREEN), expression, result, value);
      }
      else
      {
        printf(ANSI_FMT("%s result is %lu != %lu\n", ANSI_FG_RED), expression,result, value);
      }
    }
  }
*/

  return 0;
}
