#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <errno.h>
#define bool int
#define true 1
#define false 0

// this should be enough
static bool success;
static char buf[65536] = {};
static char buf_expr[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned long result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

static int string_index = 0;
static int string_index_expr = 0;
void gen_num()
{
  uint64_t tmp = rand()%65536;
  int len = 0;
  sprintf(buf + string_index, "((unsigned long) %lu)", tmp);
  sprintf(buf_expr + string_index_expr , "%lu", tmp);
  while(tmp!=0)
  {  
    tmp/=10;
    len++;
  }
  string_index += (len + 18);
  string_index_expr += len;
}

void gen(char c)
{
  sprintf(buf + string_index, "%c", c);
  sprintf(buf_expr + string_index_expr, "%c", c);
  string_index ++;
  string_index_expr ++;
}

void gen_rand_op()
{
  char tmp[5];
  int op = rand()% 8;
  switch(op)
  {
    case 0: strcpy(tmp,"+"); break;
    case 1: strcpy(tmp,"-"); break;
    case 2: strcpy(tmp,"*"); break;
    case 3: strcpy(tmp,"/"); break;
    case 4: strcpy(tmp,"%%"); break;
    case 5: strcpy(tmp,"&"); break;
    case 6: strcpy(tmp,"&"); break;
    case 7: strcpy(tmp,"^"); break;
    default: strcpy(tmp,"+");
  }

  sprintf(buf + string_index, "%s", tmp);
  sprintf(buf_expr + string_index_expr, "%s", tmp);
  string_index += 1;
  string_index_expr += 1;
}


static void gen_rand_expr(int depth) {
  if(depth > 20 || string_index > 60000)
  {
    success = false;
    return;
  }

  int n = rand();
  switch(n%3)
  {
    case 0: 
    {
      gen_num();  
    }
    break;
    case 1: 
    {
      gen('(');
      gen_rand_expr(depth+1);
      gen(')'); 
    }
    break;
    default: 
    {
      gen_rand_expr(depth+1); 
      gen_rand_op();
      gen_rand_expr(depth+1);
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr(0);
    gen('\0');


    string_index = 0;
    string_index_expr = 0;

    if(!success)
    {
      success = true;
      continue;
    }


    if(strlen(buf) > 60000)
      continue;

    sprintf(code_buf, code_format, buf);


    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    //signal( SIGCHLD, SIG_DFL );
    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    //signal( SIGCHLD, SIG_IGN );


    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    if(errno)
    {
      perror("error occur\n");
      continue;
    }
    assert(fp != NULL);

    uint64_t result;
    if(fscanf(fp, "%lu", &result)){printf("%lu %s\n", result, buf_expr);}
    pclose(fp);

  }
  return 0;
}
