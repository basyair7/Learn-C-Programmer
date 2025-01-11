/**
 *	@brief Declaring a Structure Pointer
 *	@details Using Structure Pointer
 */

/* Display a software timer. */
#include <stdio.h>

#define DELAY 1280000000
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;

struct my_time {
	uint8_t hours;
	uint8_t minutes;
	uint8_t seconds;
};

void display(struct my_time *t);
void update(struct my_time *t);
void delay(void);

int main(void) {
	struct my_time systime;
	
	systime.hours   = 18;
	systime.minutes = 35;
	systime.seconds = 0;
	
	for (;;) {
		update(&systime);
		display(&systime);
	}
	
	return 0;
}

void update(struct my_time *t) {
	t->seconds++;
	if (t->seconds == 60) {
		t->seconds = 0;
		t->minutes++;
	}
	
	if (t->minutes == 60) {
		t->minutes = 0;
		t->hours++;
	}
	
	if (t->hours == 24) t->hours = 0;
	
	delay();
}

void display(struct my_time *t) {
	printf("%02d: ", t->hours);
	printf("%02d: ", t->minutes);
	printf("%02d\n", t->seconds);
}

void delay(void) {
	volatile long int t;
	
	/* change this as needed */
	for (t = 1; t < DELAY; ++t);
}


void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32
		system("cls");
	#elif defined(__unix__) || defined(__APPLE__)
		system("clear");
	#endif	
}