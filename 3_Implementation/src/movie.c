#include "function.h"
int ListofMovies(void)

{
	int i;
	system("cls");
	printf("\t\t\tMovie Name?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for Titanic\n\n");
	printf("\t\t\tpress 2 for No time To Die\n\n");
	printf("\t\t\tpress 3 for Encanto\n");
	scanf("%d",&i);
	return i;
}
    
