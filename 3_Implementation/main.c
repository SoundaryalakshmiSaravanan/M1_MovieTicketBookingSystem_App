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
#include<stdio.h>
#include<stdlib.h>
//#include"moviedetails.c"
#include"function.h"
#include<string.h>
#include "unity.h"


int main()
{
    int count = 0;
	int **placenum,preference,amount=500,selection,i;         // Variables to place number,preference of seat, amount, selection
	placenum=(int **)calloc(101,sizeof(int *));               // seat number allocation is done
	for (i=0;i<3;i++)
		*(placenum+i)=(int *)calloc(101,sizeof(int ));
	int x;
	char pass[10],pak[10]="user";
while(x!=3)
	{
        a:preference=enterpreference();                                // preference variable is called to change the choice
		switch(preference)
		{
		    int y;
		    int ch;
			case 1:
			    b:printf(" 1- To edit price of ticket :   \n");     
                printf(" 2- To view reserved tickets:   \n");
                printf(" 3- Exit  System:        \n");
	            scanf("%d", &ch);
	            switch(ch){
            case 1:                                                   // amount to be changed by admin only 
                amount=changeamountticket(amount);
                goto b;
				break;
            case 2:                                   
                details();
                goto b;
				break;
            case 3:
                y=3;
                goto a;
                break;
             default:
				printf("choice not available\n");
				break;
	            }

	        case 2:                                              // User login for users             
                c:
                printf(" User login: \n");
                printf("        1- To purchase ticket:        \n");
                printf("        2- To cancel the seat:       \n");
                printf("        3- Exit System       \n");
                scanf("%d",&ch);
                switch(ch){


                case 1:                                                          // switch case to book ticket
                    printf("Enter the password to book the ticket: ");
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        selection=ListofMovies();
                        reserveticket(placenum[selection-1],amount,selection);     // ticked booked along with seatnumber, amount, movie selection is displayed
                        count++;
                    }
                    else
                        printf("Wrong Password!\n");
                    goto c;
                    break;
                case 2:
                    printf("Enter the password to book the ticket: ");         // Cancelled ticket is displayed
                    scanf("%s",&pass);
                    if (strcmp(pass,pak)==0){
                        selection=movieselect();
                        cancelticket(placenum[selection-1]);
                    }
                    else
                    printf("Wrong Password!\n");
                    goto c;
                    break;
				case 3:
                goto a;
                break;
             default:
				printf("choice not available\n");
				break;
				    }



			case 3:
				x=3;
				break;
			default:
				printf("choice not available\n");
				break;
		}
	}
}
