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
int ListofMovies(void)

{
	int i;     // Variable to display movie name
	system("cls");
	printf("\t\t\tMovie Name?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for Titanic\n\n");
	printf("\t\t\tpress 2 for No time To Die\n\n");
	printf("\t\t\tpress 3 for Encanto\n");
	scanf("%d",&i);
	return i;
}
    
