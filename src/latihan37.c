// Pointer to Functions 1
#include <stdio.h>
#include <string.h>

void __attribute__((constructor)) ClearTerminal(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}

void check(char *a, char *b,
		   int (*cmp)(const char *, const char *))
{
	printf("Testing for equality.\n");
	if (!(*cmp)(a, b)) printf("%s & %s = Equal\n", a, b);
	else printf("%s & %s = Not Equal\n", a, b);
}

int main(void) {
	static char s1[80], s2[80];
	int (*p)(const char *, const char *);
	
	p = strcmp;
	
	printf("Input string 1 : ");
	scanf("%s", &s1);
	printf("Input string 2 : ");
	scanf("%s", &s2);
	
	check(s1, s2, strcmp); // or check(s1, s2, strcmp);
	
	return 0;
}
