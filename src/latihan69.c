/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			Using #line
 */
 
#include "stdio.h"

#line 100							// reset the line counter
int main(void)						// line 100
{									// line 101
	printf("line %d\n", __LINE__);	// output = line 102
	
	return 0;
}