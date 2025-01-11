/**
 *	@brief Struct example
 */

#include <stdio.h>
#include <ctype.h>

void print_upper(char *str);

struct addr {
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
} addr_info;

struct addr *p = &addr_info;

int main(void) {
	printf("Insert your name : ");
	gets(addr_info.name);
	printf("Insert street\t : ");
	gets(addr_info.street);
	printf("Insert city\t : ");
	gets(addr_info.city);
	printf("Insert state\t : ");
	gets(addr_info.state);
	print_upper(addr_info.state);
	printf("Insert code zip\t : ");
	scanf("%lu", &addr_info.zip);
	
	printf("\n\n");
	printf("Name\t : %s\n", p->name);
	printf("Street\t : %s\n", p->street);
	printf("City\t : %s\n", p->city);
	printf("State\t : %s\n", p->state);
	printf("Code zip : %lu\n", p->zip);
	
	return 0;
}

void print_upper(char *str) {
	for (register int t = 0; str[t]; ++t)
		str[t] = toupper(str[t]);
}

void __attribute__((constructor)) ClearTerminal(void)
{
	#if _WIN32 || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif
}
