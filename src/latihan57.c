/**
 * @brief File I/O
 * @details Using feof()
 */
 
/* Copy a file. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *in, *out;
	char ch;
	
	if (argc != 3) {
		printf("You forgot to enter a filename.\n");
		exit(1);
	}
	
	if ((in = fopen(argv[1], "rb")) == NULL || (out = fopen(argv[2], "wb")) == NULL)
	{
		printf("Cannot open file.\n");
		exit(1);
	}
	
	/* This code actually copies the file. */
	while (!feof(in)) {
		ch = getc(in);
		if (!feof(in)) putc(ch, out);
	}
	
	fclose(in);
	fclose(out);
	
	return 0;
}