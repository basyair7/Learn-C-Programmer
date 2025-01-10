// block_statements

#include <stdio.h>

int main(void) {
    system("clear");

    int i;
    {
        i = 120;
        printf("%d", i);
    }

    {
        printf("\nHello, World\n");
    }

    return 0;
}