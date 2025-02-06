/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			Using #undef
 */
 
#include <stdio.h>

#define TED 10

int main(void) {
#ifdef TED // or #if defined
	printf("Hi Ted.\n");
#else
	printf("Hi anyone.\n");
#endif

#undef TED

#if defined TED
	printf("Hi Ted.\n");
#else
	printf("Hi anyone.\n");
#endif

#ifndef RALPH // or #if !defined
	printf("RALPH not defined.\n");
#endif
	
	return 0;
}
