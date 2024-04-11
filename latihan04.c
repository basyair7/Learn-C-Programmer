/*latihan 4:
BAJU - Sebuah program yang akan membaca ukuran panjang baju, lebar bahu, dan akan menentukan apakah pemilik ukuran tersebut harus diberi baju 
S (small), M (medium), atau L (large). Buatlah aturannya yang masuk akal, dan Anda harus menjamin bahwa setiap data akan diasosiasikan ke salah
satu ukuran baju walaupun tidak sama persis.
*/

#include <stdio.h>

int main() {
    float panjang_baju, lebar_bahu;

    // Masukkan ukuran panjang baju dan lebar bahu
    printf("Panjang Baju (cm) : ");
    scanf("%f", &panjang_baju);

    printf("Lebar Bahu (cm) : ");
    scanf("%f", &lebar_bahu);

    // tentukan ukuran baju
    if(panjang_baju <= 65 && lebar_bahu <= 45) 
        printf("\nUkuran Baju : S (Small)");

    else if(panjang_baju <= 70 && lebar_bahu <= 50)
        printf("\nUkuran Baju : M (Medium)");

    else
        printf("\nUkuran Baju : L (Large)");

    return 0;
}