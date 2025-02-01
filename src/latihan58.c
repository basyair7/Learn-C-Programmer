/**
 * @brief File I/O
 * @details Working with Strings: fputs() and fgets()
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[80];
	FILE *fp;
	
	if ((fp = fopen("TEST.txt", "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	do {
		printf("Enter a string (CR to quit):\n");
		gets(str);
		strcat(str, "\n"); /* add a newline. */
		fputs(str, fp);
	} while (*str != '\n');
	
	fclose(fp);
	
	return 0;
}

 