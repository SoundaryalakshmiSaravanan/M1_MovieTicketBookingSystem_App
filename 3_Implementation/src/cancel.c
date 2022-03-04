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
void cancelticket(int *array)              
// Function to cancel the booked tickets
{
      int Cseat,i,stop;                    
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Cseat);
	  for (i=0;i<300;i++)
	  {
	  		if(Cseat==person[i].id)
	  		{
					 stop=5;
					 system("cls");
				// If condition satisifies the below is shown
					 printf("%s your ticket is %d cancelled",person[i].name,person[i].placenum);
					 array[person[i].placenum]=0;
					 i=300;
	  		}
	  }
	  if (stop!=5)                   
          //If the ticket id is given wrong the below statement is shown
	  		printf("Ticket ID number is incorrect please enter right one to cancel ticket: \n");
}
