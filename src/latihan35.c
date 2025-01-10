// Array of pointer
#include <stdio.h>

void __attribute__((constructor)) ClearTerminal(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}

void display_array(int *q[], int length) {
	register int t;
	for (t = 0; t < length; t++)
		printf("%d ", *q[t]);
}

int main(void) {
	static int *x[10];
	register int t = 0;

	for (int i = 0; i < 10; i++, t++) {
		x[i] = &i;
		printf("%d ", *x[t]);
	}
	
	printf("\n");
	return 0;
}
