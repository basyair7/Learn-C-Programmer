// example: which uses the function `mul()`:

#include <stdio.h>

int mul(int a, int b) {
	return a * b;
}

int main(void)
{
	register int x, y, z;
	x = 10; 	y = 20;
	z = mul(x, y);				// 1
	printf("%d\n", mul(x, y));	// 2
	mul(x, y);					// 3
	
	return 0;
}
