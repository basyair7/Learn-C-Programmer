/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			The # and ## Preprocessor Operators
 */

#include <stdio.h>

#define concat(a, b) a ## b

int main(void) {
	int xy = 10;
	
	printf("%d\n", concat(x, y)); /* or printf("%d\n", xy); */
	
	return 0;
}
