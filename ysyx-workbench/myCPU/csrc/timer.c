#include <timer.h>
#include <mmio.h>
#include <time.h>
#include <sys/time.h>

static uint32_t *rtc_port_base = NULL;

static struct timeval boot_time;
static struct timeval now;

uint64_t get_time(){
	gettimeofday(&now, NULL);
	long seconds = now.tv_sec - boot_time.tv_sec;
	long useconds = now.tv_usec - boot_time.tv_usec;
	return seconds * 1000000 + useconds + 500;
}


static void rtc_io_handler(uint32_t offset, int len, bool is_write){
	if(!is_write && offset == 4){
		rtc_port_base[1] = get_time() >> 32;
	}else if(!is_write){
		rtc_port_base[0] = get_time();
	}
}


void init_timer(){
	gettimeofday(&boot_time, NULL);
	rtc_port_base = (uint32_t *) new_space(8);
	add_mmio_map("rtc", CONFIG_TIMER_MMIO, rtc_port_base, 8, rtc_io_handler);
}