#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// typedef signed char int8_t;
// typedef unsigned char uint8_t;
// typedef signed short int int16_t;
// typedef unsigned short int uint16_t;
// typedef signed int int32_t;
// typedef unsigned int uint32_t;
// typedef signed long int int64_t;
// typedef unsigned long int uint64_t;

int main(void) {
	printf("int8_t = %ld byte\n", sizeof(int8_t));
	printf("uint8_t = %ld byte\n", sizeof(uint8_t));
	printf("int16_t = %ld bytes\n", sizeof(int16_t));
	printf("uint16_t = %ld bytes\n", sizeof(uint16_t));
	printf("int32_t = %ld bytes\n", sizeof(int32_t));
	printf("uint32_t = %ld bytes\n", sizeof(uint32_t));
	printf("int64_t = %ld bytes\n", sizeof(int64_t));
	printf("uint64_t = %ld bytes\n", sizeof(uint64_t));
	printf("int128_t = %ld bytes\n", sizeof(__int128_t));
	printf("uint128_t = %ld bytes\n", sizeof(__uint128_t));
	
	printf("\n");
	printf("bool = %ld byte\n", sizeof(bool));
	printf("float = %ld bytes\n", sizeof(float));
	printf("long = %ld bytes\n", sizeof(long));
	printf("double = %ld bytes\n", sizeof(double));
	printf("long int = %ld bytes\n", sizeof(long int));
	printf("long long = %ld bytes\n", sizeof(long long));
	printf("long double = %ld bytes\n", sizeof(long double));
	
	return 0;
}