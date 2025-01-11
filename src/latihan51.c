// Arrays and Structures Within Structures

#include <stdio.h>

struct x {
	int a[10][10]; /* 10 x 10 array of ints */
	float b;
} y;

int main(void) {
	
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			y.a[i][j] = j;
		
	for (register int i = 0; i < 10; i++)
		for (register int j = 0; j < 10; j++)
			printf(
				j == 0 ? "\ny.a[%d][%d] = %d\n" : 
				"y.a[%d][%d] = %d\n", i, j, y.a[i][j]
			);
		
	printf("\n");
	
	return 0;
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32
		system("cls");
	#elif defined(__unix__) || defined(__APPLE__)
		system("clear");
	#endif
}