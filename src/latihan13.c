#include <stdio.h>

int n, next;
int sebelum = 0, sekarang = 1;

void main() {
    // masukkan nilai N
    printf("Nilai batas N untuk deret Fibonacci : ");
    scanf("%d", &n);

    // tampilkan hasil Fibonacci
    printf("Deret Fibonacci N = %d :\n", n);
    printf("%d, %d", sebelum, sekarang);

    next = sebelum + sekarang; // hitung angka selanjutnya dalam deret Fibonacci

    while (next <= n) {
        printf(", %d", next);
        sebelum = sekarang;
        sekarang = next;
        next = sebelum + sekarang;
    }

    printf("\n");

}