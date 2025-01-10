// Problem with pointer example

#include <stdio.h>
#include <string.h>

void ClearTerminal(void);

void test1(void) { /* this program has a bug */
	char *p1, s[80];
	
	p1 = s;
	do {
		/* read a string */
		printf("\nInput: ");
		gets(s);
		
		/* print the decimal equivalent of each
		   character */
		while (*p1) printf(" %d", *p1++);
	
	} while(strcmp(s, "done"));
	
	printf("\n");
}

void test2(void) { /* this program is now correct */
	char *p1, s[80];
	
	do {
		p1 = s;
		
		/* read a string */
		printf("\nInput: ");
		gets(s);
		
		/* print the decimal equivalent of each
		   character */
		while(*p1) printf(" %d", *p1++);
		
	} while(strcmp(s, "done"));
	
	printf("\n");
}

int main(void) {
	// test1();
	test2();
	return 0;
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}
