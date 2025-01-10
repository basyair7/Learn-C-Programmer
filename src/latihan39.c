// Functions (Call by Value, Call by Reference)

#include <stdio.h>

void ClearTerminal(void);
int sqr(int x);

int main(void) {
	int t = 10;
	printf("%d %d\n", sqr(t), t);
	
	return 0;
}

int sqr(int x) {
	return x * x;
}

void __attribute__((constructor)) ClearTerminal(void) {
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}