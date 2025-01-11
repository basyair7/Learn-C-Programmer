/**
 *	@brief Functions Example
 *	@details Returning Pointers
 */

#include <stdio.h>

/* Return pointer of first occurrence of c in s. */
char *match(char c, char *s) {
	while (c != *s && *s) s++;
	
	return (s);
}

void test1(void) {
	char s[80], *p, ch;
	
	printf("Input string: ");
	gets(s);
	
	printf("Input char: ");
	ch = getchar();
	
	p = match(ch, s);
	
	if (*p) /* there is a match */
		printf("%s ", p);
	else
		printf("No match found.");
	
	printf("\n");
}

void print_vertical(char *str) {
	while (*str)
		printf("%c\n", *str++);
}

void test2(int argc, char *argv[]) {
	if (argc > 1) print_vertical(argv[1]);
}

int main(int argc, char *argv[]) {
	// test1();
	test2(argc, argv);
	return 0;
}
