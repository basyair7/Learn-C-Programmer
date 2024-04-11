#include <stdio.h>

int n;
int hasil = 0;

void main() {
    // Masukkan nilai N
    printf("Masukkan nilai N : ");
    scanf("%d", &n);

    // validasi
    if(n <= 0) {
        printf("Nilai N harus lebih besar dari 0.\n");
        return;
    }

    // Hitung hasil perjumlahan deret sesuai dengan nilai N
    printf("\n");
    printf("N=%d\n", n);
    for(int i = 1; i <= n; i++) {
        hasil += i;
        printf("%d", i);
        if(i < n)
            printf("+");
        else
            printf("=");
    }
    printf("%d", hasil);

}