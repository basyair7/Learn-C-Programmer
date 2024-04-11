// soal 1
/* Sebuah mobil bergerak dengan kecepatan 150 km/jam di jalan tol yang lurus.
 * Jika waktu yang ditempuhnya 120 detik, berapa panjang lintasannya?
*/

#include <stdio.h>

int main() {
    // diketahui v = 150 km/jam; t = 120 detik
    int v = 150,  t = 120;

    // ubah detik ke jam
    // t = 120 detik = 2 menit = 2/60
    t = 2;
    int s = v*t/60;

    // tampilkan hasilnya
    printf("Jadi, panjang lintasan mobil adalah %d km", s);

    return 0;
}