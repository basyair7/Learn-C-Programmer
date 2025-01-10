// switch_ex

#include "stdio.h"

void check_spelling();
void correct_errors();
void display_errors();

int main() {
    #if _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
    
    char ch;

    printf("1. Check Spelling\n");
    printf("2. Correct Spelling Errors.\n");
    printf("3. Display Spelling Error.\n");
    printf("Strike Any Other Key to Skip\n");
    printf("        Enter your choice: ");
    ch = getchar(); /* read the selection from the keyboard */

    switch(ch) {
        case '1':
            check_spelling();
            break;
        case '2':
            correct_errors();
            break;
        case '3':
            display_errors();
            break;
        default:
            printf("no Option selected\n");
    }

    return 0;
}

void check_spelling() {
    printf("Check Spelling\n");
}

void correct_errors() {
    printf("Correct Errors\n");
}

void display_errors() {
    printf("Display Errors\n");
}