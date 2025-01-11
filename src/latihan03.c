/*latihan 3:
BERATBADAN - Program yang akan membaca berat badan seseorang, dan menentukan apakah termasuk Kurus, Ideal, atau Gemuk, Kegemukan.
Buatlah aturan yang masuk akal, untuk menentukan berat badan yang dikategorikan Kurus, Ideal, atau Gemuk, Kegemukan.
Kriteria kategori tersebut ternyata berbeda untuk anak-anak/dewasa; pria/wanita. Buatlah untuk masing-masing, aturannya dan modifikasi programnya dengan membaca umur orang, jenis kelaminnya, baru menentukan berdasarkan aturan yang Anda buat.
*/

#include <stdio.h>

int main() {
    int umur;
    char jenis_kelamin;
    float berat_badan;

    // Masukkan data berdasarkan umur, jenis kelamin, dan berat badan
    // umur
    printf("Masukkan umur (tahun) (angka saja) : ");
    scanf("%d", &umur);
    
    // jenis kelamin
    printf("Masukkan jenis kelamin (p/w) (p: pria/w: wanita) : ");
    scanf(" %c", &jenis_kelamin);
    
    // berat badan
    printf("Masukkan berat badan (kg) (angka saja) : ");
    scanf("%f", &berat_badan);

    // masukkan ke kategorisasi berat badan berdasarkan umur, jenis kelamin dan berat badan
    // anak-anak
    if(umur < 18) {
        if((jenis_kelamin == 'p' && berat_badan < 40) || (jenis_kelamin == 'w' && berat_badan < 35)) {
            printf("Kurus.\n");
        }
        else if((jenis_kelamin == 'p' && berat_badan >= 40 && berat_badan <= 60) ||
                (jenis_kelamin == 'w' && berat_badan >= 35 && berat_badan <= 50))
        {
            printf("Ideal.\n");
        }
        else printf("Gemuk/Kegemukan.\n");
    } else {
        if((jenis_kelamin == 'p' && berat_badan < 50) || (jenis_kelamin == 'w' && berat_badan < 45)) {
            printf("Kurus.\n");
        }
        else if((jenis_kelamin == 'p' && berat_badan >= 50 && berat_badan <= 70) ||
                (jenis_kelamin == 'w' && berat_badan >= 45 && berat_badan <= 65))
        {
            printf("Ideal.\n");
        }
        else printf("Gemuk/Kegemukan.\n");
    }

    return 0;
}