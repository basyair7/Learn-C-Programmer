/**
 * @brief File I/O
 * @details Defining Function-like Macros
 *			Predefined Macros Names
 */
 
#include <stdio.h>

int main(void) {

#ifdef __cplusplus
	printf("This C++ Program\n");
#else
	printf("This C Program\n");
#endif
	printf("Line : %d\n", __LINE__);
	printf("File : %s\n", __FILE__);
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("STDC : %d\n", __STDC__);

	return 0;
}
