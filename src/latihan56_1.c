/**
 * @brief File I/O
 * @details Using fopen(), getc(), putc(), and fclose()
 */

/* DTOS: A program that reads files and display them
		 on the screen. */
		 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	
	if (argc != 2 ) {
		printf("You forgot to enter the filename.\n");
		exit(1);
	}
	
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	ch = getc(fp); /* read one character */
	
	while (ch != EOF) {
		putchar(ch); /* print on screen */
		ch = getc(fp);
	}
	
	fclose(fp);
	
	return 0;
}
