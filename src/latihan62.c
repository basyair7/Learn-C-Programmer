/**
 * @brief File I/O
 * @details fseek() and Random-Access I/O
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	
	if (argc != 3) {
		printf("Usage: SEEK filename byte\n");
		exit(1);
	}
	
	if ((fp = fopen(argv[1], "rb")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	if (fseek(fp, atol(argv[2]), SEEK_SET)) {
		printf("Seek error.\n");
		exit(1);
	}
	
	printf("Byte at %ld is %c.\n", atol(argv[2]), getc(fp));
	fclose(fp);
	
	return 0;
}

