/**
 *	@brief Functions Example
 *	@details Returing from a Function
 */

#include <stdio.h>
#include <string.h>

void pr_reverse(char *s);
int find_substr(char *s1, char *s2);

void test1() {
	pr_reverse("I like C programming");
	printf("\n");
}

void test2() {
	int code_find = find_substr("C++ is fun", "is");
	
	if (code_find != -1)
		printf("substring is found\n");
	else
		printf("substring is not found\n");
}

int main(void) {
	printf("Test program 1:\n");
	test1();
	
	printf("\nTest program 2:\n");
	test2();
	
	return 0;
}

void pr_reverse(char *s) {
	for (register int t = strlen(s) - 1; t >= 0; t--)
		putchar(s[t]);
}

/* Return index of first match of s2 in s1. */
int find_substr(char *s1, char *s2) {
	register int t;
	char *p1, *p2;
	
	for (t = 0; s1[t]; t++) {
		p1 = &s1[t];
		p2 = s2;
		
		while (*p2 && *p2 == *p1) {
			*p1++;
			*p2++;
		}
		if (!*p2) return t; /* 1st return */
	}
	
	return -1; /* 2nd return */
}
