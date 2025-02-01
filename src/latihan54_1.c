/**
 * @brief C-Style Console I/O
 * @details Formatted Console I/O "printf()"
 */

#include <stdio.h>

/* The Minimum Field Width Specifier */
void test1() {
	
	short int i = 0;
	
	/* display a table of squares and cubes */
	for (i = 1; i < 20; i++)
		printf("%8d %8d %8d\n", i, i*i, i*i*i);
}

/* The Precision Specifier */
void test2() {
	printf("%.4f\n", 123.1234567);
	printf("%3.8d\n", 1000);
	printf("%10.15s\n", "This is a simple test.");
}

/* Justifying Output */
void test3() {
	printf("right-justified:%8d\n", 100);
	printf("left-justified:%-8d\n", 100);
	
	printf("%10s\n", "Hello");
	printf("%-10s\n", "World");
}

/**
 * Handling Other Data Types
 * The * and # Modifiers
 */
void test4() {
	printf("%x %#x\n", 10, 10);
	printf("%*.*f\n", 10, 4, 1234.34);
}

int main(void) {
	// test1();
	// test2();
	// test3();
	test4();
	return 0;
}
