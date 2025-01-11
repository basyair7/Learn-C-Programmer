/**
 *	@brief Functions Example
 *	@details recursive & non-recursive
 */

#include <stdio.h>

int factr(int n);
int fact(int n);

int main(void) {
	printf("%d\n", fact(5));
	return 0;
}

/* recursive */
int factr(int n) {
	int answer;
	
	if (n == 1) return (1);
	answer = factr(n - 1) * n; /* recursive call */
	return (answer);
}

/* non-recursive */
int fact(int n) {
	int t, answer;
	
	answer = 1;
	
	for (t = 1; t <= n; t++)
		answer = answer * (t);
	
	return answer;
}