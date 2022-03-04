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
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];     //Structure to hold ticket details
void details(void)
{
	int i;
	int count =0;
	char pass[10],pak[10]="admin";
	printf("Enter the password to see details: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		for (i=0;i<count;i++)
		{
			printf("seat no: %d is booked by %s booking id is %d\n",person[i].placenum,person[i].name,person[i].id);
			//Ticket booked along with seat number,name, booking id is displayed
		}
	}
	else
		printf("Entered password is wrong \n");
		system("PAUSE");
		system("CLS");
}
