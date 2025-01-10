// Pointer example

#include <stdio.h>

void test1(void) {
	double x = 100.1, y;
	int *p;
	
	/* The next statement causes p (which is an integer pointer)
	 * to point to a double.
	 */
	p = &x;
	
	/* The next statement does not operate as
	   excepted.
	*/
	
	y = *p;
	
	printf("%f\n", y); // won't output 100.1
}

void test2(void) {
	int x = 25;
	int *p1, *p2;
	
	p1 = &x;
	p2 = p1;
	
	printf(" %d\n", *p2);
	printf(" %p\n", p2); // print the address of x, not x's value!
}

int main(void) {
	// test1();
	test2();
	
	return 0;
}