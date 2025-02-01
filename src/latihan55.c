/**
 * @brief C-Style Console I/O
 * @details Formatted Console I/O "scanf()"
 */
 
#include <stdio.h>

/* Inputting Numbers */
void test1() {
	
	int i, j;
	
	scanf("%o%x", &i, &j);
	printf("%o %x\n", i, j);
}

/* Inputting Unsigned Integers */
void test2() {
	unsigned num;
	scanf("%u", &num);
	printf("%u\n", num);
}

/* Read Strings */
void test3() {
	char str[80];
	
	printf("Enter a string: ");
	scanf("%s", str);
	printf("Here's your string: %s\n", str);
}

int main(void) {
	// test1();
	// test2();
	test3();
	
	return 0;
}