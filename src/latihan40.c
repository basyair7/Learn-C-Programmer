// Functions (Creating a Call by Reference)

#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	
	temp = *x; // save the value at address x
	*x = *y; // put y into x
	*y = temp; // put x into y
}

int main(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
	
	int i, j;
	i = 10;
	j = 20;
	
	printf("before swap: i = %d, j = %d\n", i, j);
	
	swap(&i, &j); /* pass the addresses of i and j */
	
	printf("after swap: i = %d, j = %d\n", i, j);
	
	return 0;
}
