#include <stdio.h>

void main() {
    int n;

    // masukkan nilai N
    printf("Masukkan nilai N (1-1000) : ");
    scanf("%d", &n);

    // validasi nilai N
    if(n < 1 || n > 1000){
        printf("Nilai N harus berada di rentang 1 - 1000...");
        return;
    }

    // cetak pola bintang sesuai dengan nilai N
    for(int i = 0; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}