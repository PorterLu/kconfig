#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
 
word_t vaddr_read(vaddr_t addr, int len);
void print_wp();
void check_wp();
void new_wp(char *e);
void free_wp(int NO);
void print_ftrace();
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void device_print();
void dtrace_print();
void print_etrace();
void print_strace();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) 
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
   nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_dt(char *args){
	dtrace_print();
	return 0;
}

static int cmd_dp(char *args){
	device_print();
	return 0;
}

static int cmd_et(char *args){
	print_etrace();
	return 0;
}

static int cmd_st(char *args){
	print_strace();
	return 0;
}

static int cmd_ft(char *args)
{
	print_ftrace();
	return 0;
}

static int cmd_si(char *args) {
  args = strtok(NULL," ");
  if(args == NULL)
  {
    cpu_exec(1);
  }
  else
	{
		int tmp;
		sscanf(args,"%d",&tmp);
		if(tmp > 0)
			cpu_exec(tmp);		
	}
  return 0;
}

static int cmd_info(char *args){
  args = strtok(NULL," ");
  if(strcmp(args, "r") == 0)
    isa_reg_display();
  if(strcmp(args, "w") == 0)
  {
    print_wp();
  }
  
  return 0;
}

static int cmd_x(char *args)
{	
    int n,addr_n,i;
	  bool success = true;
	  char *num = strtok(NULL," ");
	  char *addr = strtok(NULL," ");
	  sscanf(num,"%d",&n);
	  addr_n = expr(addr,&success);
	  for(i=0;i<n*4;i++)
	  {
		  if(i%4 == 0)
			  printf("%08x: ",addr_n+i);
	  	printf("%02lx ",vaddr_read(addr_n+i,1));
		  if(i%4 == 3)
			  printf("\n");
	  }
  return 0;
}

static int cmd_p(char *args){
	bool success=true;
	char *str = strtok(NULL," ");
	uint64_t value = expr(str,&success);
	printf("0x%lx\n",value);
	return 0;
}

int cmd_w(char *args)
{
	char *expression = strtok(NULL," ");
  new_wp(expression);
  /*
	  WP *wp =new_wp();
	  strcpy(wp->expr,expression); 
	  wp->value = expr(expression,&success);
  */
	return 0;	
}

int cmd_d(char *args)
{
	int no;
	char *str = strtok(NULL," ");
	sscanf(str,"%d",&no);
	free_wp(no);
	return 0;
}

void print_ringbuf();
int cmd_rb(char *args)
{
	print_ringbuf();
	return 0;
}

void memlog_print(paddr_t start, word_t len, char* type);
int cmd_mt(char *args)
{
	paddr_t start;
	int len;
	char type[2];

	char *tmp;

	tmp = strtok(NULL," ");
	sscanf(tmp, "%s", type);

	tmp = strtok(NULL," ");
	sscanf(tmp, "%x", &start);

	tmp = strtok(NULL," ");
	sscanf(tmp, "%d", &len);

	memlog_print(start, len, type);

	return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Single step", cmd_si},
  { "info", "informations of register and watchpoint", cmd_info},
  { "x", "scan memory", cmd_x},
  { "p", "calculate the value", cmd_p},
  { "w", "set watchpoint", cmd_w},
  { "d", "delete watchpoint", cmd_d},
  { "rb", "print contents of ringbuf", cmd_rb},
  { "mt", "trace memory request", cmd_mt},
  { "ft", "trace function implementation", cmd_ft},
  {	"dt", "trace device access", cmd_dt},
  { "dp", "print all device", cmd_dp},
  { "et", "trace exception", cmd_et},
  { "st", "strace system call", cmd_st}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	int i;

	if(arg == NULL) {
		/* no argument given */
		for(i = 0; i < NR_CMD; i ++) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}
	else {
		for(i = 0; i < NR_CMD; i ++) 
    	{
			if(strcmp(arg, cmd_table[i].name) == 0) 
      		{
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}


void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
	//sdb_set_batch_mode();
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue(); 
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
