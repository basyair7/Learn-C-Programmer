/**
 * @brief File I/O
 * @details fread() and fwrite()
 */
 
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>

struct addr {
	char name[80];
	char street[40];
	char city[20];
	char state[3];
	uint64_t zip;
} addr_info;

struct addr *addr_p = &addr_info;
FILE *fp;

int main(void) {
	if ((fp = fopen("test", "rb+")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	
	fread(&addr_info, sizeof(struct addr), 1, fp);
	
	printf("\n\n");
	printf("Name\t : %s\n", addr_p->name);
	printf("Street\t : %s\n", addr_p->street);
	printf("City\t : %s\n", addr_p->city);
	printf("State\t : %s\n", addr_p->state);
	printf("Code zip : %lu\n", addr_p->zip);
	
	fclose(fp);
	
	return 0;
}
