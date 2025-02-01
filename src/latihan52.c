/**
 *	@brief Unions Example
 */
 
#include <stdio.h>

union pw {
	short int i;
	char ch[2];
};

int __putw(short int num, FILE *fp);

int main(void) {
	FILE *fp;
	fp = fopen("../build/test.tmp", "wb+");
	
	__putw(1000, fp); /* write the value 1000 as an integer */
	fclose(fp);
	
	return 0;
}

int __putw(short int num, FILE *fp) {
	union pw word;
	word.i = num;
	
	putc(word.ch[0], fp); /* write first half */
	return putc(word.ch[1], fp); /* write second half */
}
