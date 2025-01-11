#include <stdio.h>

// buat fungsi untuk mencari hasil deret aritmatika
int* hasilDeretAritmatika(int a, int b, int n) {
    static int result[100];
    printf("Deret aritmatika dengan suku pertama %d, beda %d, dan %d : \n", a, b, n);
    for(int i = 0; i < n; i++) {
        result[i] = a + i * b;
        printf("%d ", result[i]);
    }
    printf("\n");
    return result;
}

// buat fungsi untuk mencari hasil deret geometry
int* hasilDeretGeometri(int a, int r, int n) {
    static int result[100];
    printf("Deret Geometri dengan suku pertama %d, rasio %d, dan %d : \n", a, r, n);
    for (int i = 0; i < n; i++) {
        result[i] = a*(1 << i);
        printf("%d ", result[i]);
    }

    printf("\n");
    return result;
}

// buat fungsi untuk mencari hasil deret fibonacci
int* hasilDeretFibonacci(int n) {
    int a = 0, b = 1, c;
    static int result[100];
    printf("Deret Fibonacci dengan %d suku pertama : \n", n);
    printf("%d %d ", a, b);
    result[0] = a;
    result[1] = b;
    for(int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        result[i] = c;
        a = b;
        b = c;
    }

    printf("\n");
    return result;
}

void main() {
    // cetak deret aritmatika
    int* deretAritmatika = hasilDeretAritmatika(2, 3, 5);
    // cetak deret geometri
    int* deretGeometri = hasilDeretGeometri(2, 3, 5);
    // cetak deret fibonacci
    int* deretFibonacci = hasilDeretFibonacci(10);

    // tampilkan hasilnya dari nilai ke 4
    printf("Nilai ke-4 dalam deret aritmatika : %d\n", deretAritmatika[3]);
    printf("Nilai ke-4 dalam deret geometri : %d\n", deretGeometri[3]);
    printf("Nilai ke-4 dalam deret fibonacci : %d\n", deretFibonacci[3]);
}