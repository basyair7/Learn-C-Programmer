// Initializing pointer
#include <stdio.h>
#include <string.h>

const char *p = "hello world";

int main(void) {
	register int t;
	
	printf("%s\n", p);
	for (t = strlen(p); t > -1; t--)
		printf("%c", p[t]);
	
	printf("\n");
	return 0;
}
