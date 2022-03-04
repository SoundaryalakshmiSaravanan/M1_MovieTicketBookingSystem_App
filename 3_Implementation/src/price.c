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
int changeamountticket(int amount)       // Function to change amount can be done only by admin
{
	char pass[10],pak[10]="admin";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		printf("Please enter new price: ");      
		scanf("%d",&amount);
		printf("price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The entered password is wrong! ");
	return amount;
}
