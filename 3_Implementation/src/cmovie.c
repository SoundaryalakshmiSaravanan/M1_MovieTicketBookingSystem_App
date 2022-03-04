/**
 * @file function.h
 * @author SoundaryalakshmiSaravanan (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
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
