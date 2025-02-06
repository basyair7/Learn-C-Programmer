/**
 * @brief File I/O
 * @details Defining Function-like Macros
 */
 
/* Simple #if/#else example. */
#include <stdio.h>

#define MAX 10

int main(void) {
#if MAX > 99
	printf("Compiled for array greater than 99.\n");
#else
	printf("Compiled for small array.\n");
#endif

	return 0;
}
