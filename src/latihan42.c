/**
 *	@brief Functions Example
 *	@details A simple version of the standard
 *			 gets() library function.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *xgets(char *s, int length);
void print_upper(char *string);

int main(void) {
	char s[80];
	
	printf("Input string: ");
	xgets(s, 80);
	print_upper(s);
	printf("s is now uppercase: %s\n", s);
	
	return 0;
}

void print_upper(char *string) {
	for (register int t = 0; string[t]; ++t)
		string[t] = toupper(string[t]);
}

char *xgets(char *s, int length) {
	char ch, *p;
	int t;
	
	p = s; /* gets() returns a pointer to s */
	
	for (t = 0; t < length; ++t) {
		ch = getchar();
		
		switch(ch) {
			case '\n':
				s[t] = '\0'; /* terminate the string */
				return p;
				
			case '\b':
				if (t > 0) t--;
				break;
			default:
				s[t] = ch;
		}
	}
	s[length-1] = '\0';
	return p;
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}
