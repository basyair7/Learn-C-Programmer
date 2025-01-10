// bit_shift_ex

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

void test1();

unsigned char x = 7;
int main() {
    // test1();

    printf("left shift : 0\n");
    result(x);

    x = x << 1;
    printf("left shift : 1\n");
    result(x);

    x = x << 3;
    printf("left shift : 3\n");
    result(x);

    x = x << 2;
    printf("left shift : 2\n");
    result(x);
    
    x = x >> 1;
    printf("right shift : 1\n");
    result(x);

    x = x >> 2;
    printf("right shift : 2\n");
    result(x);

    x = ~x;
    printf("Reset...\n");
    result(x);


    return 0;
}

void test1() {
    unsigned int i;
    int j;

    // left shifts
    printf("\n");
    for (j = 0; j < 4; j++) {
        i = i << 1; // left shift i by 1, which is same as a multiply by 2
        printf("Left shift %d : %d\n", j, i);
    }

    // right shifts
    printf("\n");
    for (j = 0; j < 4; j++) {
        i = i >> 1; // right shift i by 1, which is same as a division by 2
        printf("Right shift %d : %d\n", j, i);
    }
}
