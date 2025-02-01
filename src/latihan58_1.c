/**
 * @brief File I/O
 * @details Working with Strings: fputs(), fgets() and rewind()
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char str[80];
	
	if ((fp = fopen("TEST.txt", "w+")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	do {
		printf("Enter a string (CR  to quit):\n");
		gets(str);
		strcat(str, "\n"); /* add a newline */
		fputs(str, fp);
	} while (*str != '\n');
	
	/* now, read and display the file */
	rewind(fp); /* reset file position indicator to
				   start of the file. */
				   
	while (!feof(fp)) {
		fgets(str, 79, fp);
		printf(str);
	}
	
	fclose(fp);
	
	return 0;
}
