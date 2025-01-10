// pointer

#include <stdio.h>

void printBiner(int x) {
    for (int i = 31; i >= 0; i--) {
        (x & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
}

int left_shift(int val, int pos) {
    return val = val << pos;
}

int right_shift(int val, int pos) {
    return val = val >> pos;
}

void result(int val) {
    printBiner(val);
    printf("Result : %d\n", val);
}

int main(void) {
    int target, source;
    char *m;
    
    printf("Addr Memory : %d\n", &m);
    printf("Value : %d\n", *m);

    source = 10;
    m = &source;
    printf("Addr Memory : %d\n", &m);
    printf("Value : %d\n", *m);

    target = *m;

    printf("target = %d\n", target);

    return 0;
}