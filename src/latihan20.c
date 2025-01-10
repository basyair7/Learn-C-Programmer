// struct_test

#include <stdio.h>
#include <string.h>

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int int16_t;
typedef unsigned short int uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;

struct employee
{
    char name[80];
    uint8_t age;
    float wage;
} emp;

int main(void) {
    strcpy(emp.name, "Basyair");
    emp.age = 25;
    emp.wage = 44;

    printf("Name: %s\nAge: %u\nWage: %2.f\n", emp.name, emp.age, emp.wage);    
    return 0;
}