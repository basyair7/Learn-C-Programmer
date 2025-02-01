/**
 *  @brief Enum example
 */

#include <stdio.h>

enum coin { penny, nickel, dime, quarter,
half_dollar, dollar };

enum coin money;

int main(void)
{	
	const char name[6][12] = {
		"penny",
		"nickel",
		"dime",
		"quarter",
		"half_dollar",
		"dollar"
	};

	for (register size_t i = 0; i < (sizeof(name)/sizeof(name[0])); i++)
	{
		money = i;
		printf("%s\n", name[money]);
	}
	
	return 0;
}
