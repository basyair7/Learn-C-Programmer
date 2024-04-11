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
    for(int i = 1; i <= n; i++) {
        if(i == 1 || i == n) {
            for(int j = 1; j <= n; j++)
                printf("o");
        }
        else {
            printf("o");
            for(int j = 1; j <= n-2; j++)
                printf("*");
            
            printf("o");
        }
        printf("\n");
    }
}