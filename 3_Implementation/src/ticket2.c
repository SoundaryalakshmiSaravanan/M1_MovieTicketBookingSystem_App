 #include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void show2(int preference,char name[10],int id1,int amount)
{
        int count =0;
		system("cls");
		printf("\n\n");
       
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name :The Invisible Man\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                                Date      : 15-04-2020\n");
        printf("\t                                              Time      : 09:00pm\n");
        printf("\t                                              Hall      : 03\n");
        printf("\t                                              seats No. : %d  \n",preference);
        printf("\t                                              amount . : %d  \n\n",amount);
        person[count].id=id1;
       printf("\tThankYou For Booking a Ticket\n");
        return;
}