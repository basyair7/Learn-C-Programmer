// arrays_sample_1

#include <stdio.h>

void __attribute__((constructor)) ClearTerminal(void) {
#if _WIN32 || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}

void __attribute((destructor)) Hello(void) {
    printf("\n\nHello, World\n\n");
}

int main(void) {
    int x[100]; // this declares a 100-integer array
    int t = 0;

    // load x with values 0 through 99
    for (t = 0; t < (int)(sizeof(x)/sizeof(x[0])); ++t) x[t] = t;

    // display contents of x
    for (t = 0; t < (int)(sizeof(x)/sizeof(x[0])); ++t) 
        printf((t < (int)(sizeof(x)/sizeof(x[0])) - 1) ? "%d, " : "%d\n", x[t]);

    return 0;
}