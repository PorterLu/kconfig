#include "sdb.h"
#include "isa.h"

#define NR_WP 32
#define expr_maxl 100

word_t expr(char *e, bool *success);

typedef struct watchpoint {
	int NO;
	struct watchpoint *next;
	char expr[expr_maxl];
	uint64_t value;

} WP;


static WP wp_pool[NR_WP];
static WP *head, *free_;

void init_wp_pool() {
	int i;
	for(i = 0; i < NR_WP; i ++) {
		wp_pool[i].NO = i;
		wp_pool[i].next = &wp_pool[i + 1];
	}
	wp_pool[NR_WP - 1].next = NULL;

	head = NULL;
	free_ = wp_pool;
}

void new_wp(char *expression)
{
	WP* pointer = free_;
  	bool success = true;
	if(pointer != NULL)
	{
		free_ = pointer->next;
		pointer->next = head;
		head = pointer;
    	strcpy(pointer->expr, expression);
    	pointer->value = expr(expression, &success);
	}	
}

void free_wp(int NO)
{
	WP* pointer = head;
	WP* pre = NULL;
	while(pointer != NULL)
	{
		//printf("scanning No is %d\n",pointer->NO);
		if(pointer->NO == NO)
		{
			if(pre == NULL)
				head = pointer->next;
			else
			{
				pre->next = pointer->next;
				head = pre;
			}
			pointer->next = free_;
			free_ = pointer;
			return ;
		}
		pre = pointer;
		pointer = pointer->next;
	}
}

void print_wp()
{
	printf("watchpoint list:\n");
  	WP* pointer = head;
  	while(pointer != NULL)
  	{
    	printf(" NO: %d, ",pointer->NO);
    	printf(" expr: %s 0x%lx\n",pointer->expr,pointer->value);
    	pointer = pointer->next;
  	}
}

bool check_wp()
{
	bool success = true,record = false;
	WP *pointer = head;
  	while(pointer != NULL)
  	{
    	uint64_t value = expr(pointer->expr,&success);
		success = true;
    	if(value != pointer->value)
    	{
      		record = true;
      		pointer->value = value;
      		printf("w%d,Program stop before 0x%08lx new value = %lx\n",pointer->NO,cpu.pc, pointer->value);
      		break;
    	}	
    	pointer = pointer->next;
  	}
	return record;
}
