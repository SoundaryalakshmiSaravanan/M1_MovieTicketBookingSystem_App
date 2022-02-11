#include "function.h"

int movieselect(void)
{
	int i;
	printf("\t\t\tMovie Name\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for Titanic\n\n");
	printf("\t\t\tpress 2 for No Time To Die\n\n");
	printf("\t\t\tpress 3 for Encanto\n");
	scanf("%d",&i);
	return i;
}
