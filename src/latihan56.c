/**
 * @brief File I/O
 * @details Using fopen(), getc(), putc(), and fclose()
 */

/* KTOD: A key to disk program. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	
	if (argc != 2) {
		printf("You forgot to enter the filename.\n");
		exit(1);
	}
	
	if ((fp = fopen(argv[1], "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	
	printf("input : ");
	do {
		ch = getchar();
		if (ch != '$') fputc(ch, fp);
	} while (ch != '$');
	
	fclose(fp);
	
	return 0;
}

