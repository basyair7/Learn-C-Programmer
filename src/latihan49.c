/**
 *  @brief Struct example
 *	@details Passing Entire Structures to Functions
 */

#include <stdio.h>

/* Define a structure type. */
struct struct_type {
	int a, b;
	char ch;
};

void f1(struct struct_type parm);

int main(void) {
	struct struct_type arg;
	
	arg.a = 1000;
	
	f1(arg);
	
	return 0;
}

void f1(struct struct_type parm) {
	printf("%d\n", parm.a);
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32
		system("cls");
	#elif defined(__unix__) || defined(__APPLE__)
		system("clear");
	#endif
}