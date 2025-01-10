// null_terminated_str_ex

#include <stdio.h>
#include <string.h>

void __attribute__((constructor)) ClearTerminal(void) {
    #if _WIN32 || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

int main(void) {
    char s1[100], s2[80];

    printf("Input String 1: ");
    gets(s1);
    printf("Input String 2: ");
    gets(s2);

    printf("\nlengths: %d %d\n", strlen(s1), strlen(s2));

    if (!strcmp(s1, s2)) printf("The strings are equal\n");

    strcat(s1, s2);
    printf("%s\n", s1);

    strcpy(s1, "This is a test.\n");
    printf(s1);

    if (strchr("hello", 'e')) printf("e is in hello\n");
    if (strstr("hi there", "hi")) printf("found hi\n");

    return 0;
}