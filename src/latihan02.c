/* latihan 2:
AIR - Sebuah program akan membaca T, yaitu temperatur air pada tekanan atmosfir, dan menentukan apakah air tersebut dalam keadaan beku, padat atau uap. Tentukan angka-angka yang diperlukan untuk mengetes program ini.
*/

#include <stdio.h>

float temperature;
int main() {
    // masukkan temperature air
    printf("Masukkan temperature air (dalam derajat Celsius) : ");
    scanf("%f", &temperature);

	// cek keadaan air
	if(temperature <= 0.0) {
		printf("Air dalam keadaan beku (padat).\n");
	}
	else if(temperature > 100) {
		printf("Air dalam keadaan uap (panas).\n");
	}
	else {
		printf("Air dalam keadaan cair.\n");
	}
    return 0;
}