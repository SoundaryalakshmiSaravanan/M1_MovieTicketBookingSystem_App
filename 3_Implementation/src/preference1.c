#include "function.h"
int enterpreference(void)
{
	int preference;
	printf("                 Welcome To Movie Ticket Booking System\n");
	printf(" ************#######************\n");
	printf("             1- Admin           \n");
	printf("             2- User          \n");
	printf("             3- Exit system:                                   \n");
	printf("**********************\n");
	printf("  Enter your choice: ");
	scanf("%d",&preference);
	return preference;
}
