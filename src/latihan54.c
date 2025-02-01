/* A simple dictionary */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* list of words and meanings */
const char *dic[5][40] = {
	"atlas", "A volume of maps.",
	"car", "A motorized vehicle.",
	"telephone", "A communication device.",
	"airplane", "A flying machine.",
	"", "" /* null terminate the list */
};

int main(void) {
	char word[80], ch;
	char **p;
	
	do {
		printf("\nEnter word: ");
		scanf("%s", word);
		
		p = (char **)dic;
		
		/* find matching word and print it's meaning */
		do {
			if (!strcmp(*p, word)) {
				printf("Meaning: ");
				puts(*(p+1));
				break;
			}
			if (!strcmp(*p, word)) break;
			p = p + 2; /* advance through the list */
		} while (*p);
		if (!*p) puts("Word not in dictionary.");
		printf("\nAnother? (y/n): ");
		scanf(" %c%*c", &ch);
	} while (toupper(ch) != 'N');
	
	return 0;
}