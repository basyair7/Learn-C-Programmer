/**
 *	@brief Functions Example
 *	@details Calling Functions with Arrays
 */

#include <stdio.h>
#include <ctype.h>

void print_upper(char *string);

int main(void) {
	char s[80];
	
	printf("Input String: ");
	gets(s);
	print_upper(s);
	printf("\ns is unchanged: %s\n", s);
	return 0;
}

/* Print a string in uppercase. */
void print_upper(char *string) {
	/***
	for (register int t = 0; string[t]; ++t) {
		string[t] = toupper(string[t]);
		putchar(string[t]);
	}
	***/
	
	for (register int t = 0; string[t]; ++t)
		putchar(toupper(string[t]));
}
