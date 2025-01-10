// Array Initialization

#include <stdio.h>

void __attribute__((constructor)) ClearTerminal(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}

int sqrs[10][2] = {
	{1, 1},
	{2, 4},
	{3, 9},
	{4, 16},
	{5, 25},
	{6, 36},
	{7, 49},
	{8, 64},
	{9, 81},
	{10, 100},
};

int main(void) {
	for (int i = 0; i < 10; i++)
		for (int j = 1; j < 2; j++)
			printf("sqrs %d = %d\n", sqrs[i][j-1], sqrs[i][j]);
	
	return 0;
}