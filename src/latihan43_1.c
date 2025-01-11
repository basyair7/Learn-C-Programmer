/**
 *	@brief Functions Example
 *	@details argc and argv - Arguments to main()
 */
 
#include <stdio.h>

int main(int argc, char *argv[]) {
	register int t, i;
	
	for (t = 0; t < argc; ++t) {
		i = 0;
		
		while (argv[t][i]) {
			putchar(argv[t][i]);
			++i;
		}
		printf("\n");
	}
	
	return 0;
}
