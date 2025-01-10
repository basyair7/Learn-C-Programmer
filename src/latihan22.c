// Magic number program #5
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned char magic;
    int guess, retry = 0;
    
    magic = rand(); /* generated the magic number */

    while(1) {
        printf("Guess the magic number: ");
        scanf("%d", &guess);

        if (guess == magic) {
            printf("** Right ** ");
            printf("%d is the magic number\n", magic);
            return 0;
        }
        else
            guess > magic ? printf("High\n") : printf("Low\n");
        
        retry++;


        if (retry > 10) {
            printf("Answer: %d", magic);
            return 0;
        }
    }

    return 0;
}