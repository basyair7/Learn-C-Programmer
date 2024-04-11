#include <stdio.h>

#define true 1
#define false 0

int main() {
    // Loop selamanya, jika nilai n = 0 maka program akan berhenti
    while(true) {
        int n;
        // Minta masukkan nilai N di terminal
        printf("Masukkan nilai N : ");
        scanf("%d", &n);

        // validasi nilai n
        if(n == 0) break;
        if(n <= 0) {
            printf("Nilai N harus lebih besar dari atau sama dengan 0\n");
            continue;
        }

        // hitung hasil penjumlahan deret bilangan ganjil
        int hasil = 0, suku = 1; // Suku pertama adalah 1
        printf("N=%d\n", n);
        for (int i = 1; i <= n; i++) {
            hasil += suku; // Tambahkan suku ke hasil penjumlahan
            printf("%d", suku); // Tampilkan suku
            if (i < n) {
                printf("+");
            } else {
                printf("=");
            }
            suku += 2; // Naikkan suku untuk mendapatkan suku ganjil berikutnya
        }
        printf("%d\n", hasil); // Tampilkan hasil

    }

    return 0;
}