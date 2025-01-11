#include <stdio.h>

int main() {
    // loop untuk menghitung turunan jumlah
    for(int i = 10; i >= 1; i--) {
        printf("Anak ayam turun %d; ", i);
        if (i == 1)
            printf("Mati 1 tinggal induknya.\n");

        else
            printf("Mati 1 tinggal %d.\n", i - 1);
    }

    return 0;
}