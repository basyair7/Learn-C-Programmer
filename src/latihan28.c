// two_dimensional_arrays

#include <stdio.h>

void __attribute__((constructor)) ClearTerminal(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}

int main(void) {
	int t, i, num[3][4];
	
	for (t = 0; t < 3; ++t)
		for (i = 0; i < 4; ++i) {
			// printf("%d = %d\n", (t * 4), ((t * 4) + i + 1));
			num[t][i] = (t * 4) + i + 1;
		}
		
	// now print them out
	for (t = 0; t < 3; ++t) {
		for (i= 0; i < 4; ++i)
			printf("%3d", num[t][i]);
		printf("\n");
	}
	
	return 0;
}