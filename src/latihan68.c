/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			#ifdef and #ifndef
 */
 
#include <stdio.h>

#define TED 10

int main(void) {
#ifdef TED
	printf("Hi Ted.\n");
#else
	printf("Hi anyone.\n");
#endif

#ifndef RALPH
	printf("RALPH not defined.\n");
#endif
	
	return 0;
}
