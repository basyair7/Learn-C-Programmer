// Pointer to Functions 2

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void ClearTerminal(void);

void check(char *a, char *b,
		int (*cmp)(const char *, const char *));

int numcmp(const char *a, const char *b);

int main(void) {
	static char s1[80], s2[80];
	
	printf("Insert string 1: ");
	gets(s1);
	printf("Insert string 2: ");
	gets(s2);
	
	if (isalpha(*s1))
		check(s1, s2, strcmp);
	else
		check(s1, s2, numcmp);
	
	return 0;
}

void check(char *a, char *b,
		int (*cmp)(const char *, const char *))
{
	printf("Testing for equality.\n");
	if (!(*cmp)(a, b)) printf("%s & %s = Equal.\n", a, b);
	else printf("%s & %s = Not Equal.\n", a, b);
}

int numcmp(const char *a, const char *b) {
	return ((atoi(a) == atoi(b)) ? 0 : 1);
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}