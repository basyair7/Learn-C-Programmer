#include <stdio.h>

void cetakDeretAritmatika(int a, int b, int n) {
    printf("Deret aritmatika dengan suku pertama %d, beda %d, dan %d : \n", a, b, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", a + i * b);
    }
    printf("\n");
}

int main() {
    cetakDeretAritmatika(2, 5, 3);
    return 0;
}