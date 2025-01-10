#include <stdio.h>

#define true 1
#define false 0

void main() {
    int n, valid = true;
    int faktorial = 1;

    // Minta pengguna memasukkan nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &n);

    // Hitung dan cetak langkah-langkah faktorial
    printf("Hasil faktorial dari 1 hingga %d: ", n);
    for (int i = 1; i <= n; i++) {
        faktorial *= i;
        if (faktorial > 3267) {
            printf("\nNilai faktorial melebihi 3267, berhenti pada N = %d (faktorial = %d)\n", (i - 1), faktorial);
            valid = false;
            break;
        }
        printf("%d", i);
        if (i != n) {
            printf(" x ");
        }
    }

    if(valid) printf(" = %d\n", faktorial);
    
}
