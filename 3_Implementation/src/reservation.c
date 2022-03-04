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

struct movie_details person[300];
void reserveticket(int *array,int amount,int selection )
{
		int i,j;
		int count =0;
		int id1 = 1000;
		printf("\n                                SCREEN\n\n\n");       
		for (i=1;i<=100;i++)
		{
			if (array[i]==0)                   // array used to generate sequential seat numbers
				printf("%d\t",i);
			else
				printf("*\t",i);
			if(i%10==0)
				printf("\n\n");
		}
		printf("Please enter your name: ");
		scanf(" %19[^\n]%*[^\n]",&person[count].name);
		printf("Please enter your phone number: ");
		scanf("%u",&person[count].phoneno);
		printf("Please select seat number you want? ");
		scanf("%d",&j);
		if (j>100||j<1)
			{
				printf("seat1 number is unavailable in this theater\n");                         // If seat is unavaible this ststement is displayed
				printf("Please re-enter seat number: ");
				scanf("%d",&j);
			}
		if (array[j]==1)
			{
				printf("Sorry, this ticket is already booked! Please choose another seat.\n");   // If the seat is already booked this ststement is displayed
				scanf("%d",&j);
			}
		else
			array[j]=1;
		person[count].placenum=j;
		if (selection==1)
			show1(j,person[count].name,id1,amount);  // if 1st choice is avilable 
		else if (selection==2)
			show2(j,person[count].name,id1,amount);  // if 2nd choice is available
		else
			show3(j,person[count].name,id1,amount);  // if 3rd choice is available
		id1++;
}
