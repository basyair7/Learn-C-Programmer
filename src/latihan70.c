/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			The # and ## Preprocessor Operators
 */
 
#include <stdio.h>

#define mkstr(s) # s

int main(void) {
	printf(mkstr("I like C++")); /* or printf(mkstr(I like C++)); */
	printf("\n");
	return 0;
}
