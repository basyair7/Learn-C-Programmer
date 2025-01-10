#include <stdio.h>
#include <stdint.h>

const int16_t arr[] = {
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
    1,2,3,4,5,
};

int main() {
    int num = 1; // Nomor baris

    // Iterasi setiap 5 elemen dalam array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i += 5) {
		printf("%d => ", num); // Cetak nomor baris
        
        // Cetak 5 elemen di baris tersebut
        for (int j = 0; j < 5; j++) {
            printf("%d", arr[i + j]);
            if (j < 4) printf(","); // Cetak koma di antara elemen, kecuali elemen terakhir
        }
        printf("\n"); // Baris baru setelah 5 elemen selesai dicetak
        num++; // Increment nomor baris
    }

    return 0;
}
