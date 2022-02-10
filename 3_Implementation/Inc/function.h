#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"



       





#endif /* #define _FUNCTION_H__ */


/**
 * @brief login withrespective to customer or admin
 */


int enterpreference(void);
/**
 * @brief login for admin
 * 
 */
void details(void);
/**
 * @brief Displays the movie available to purchase a ticket
 */

int ListofMovies(void);
int movieselect(void);

/**
 * @brief admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changeamountticket(int);

/**
 * @brief Customer can purchase a ticket 
 */

void show1(int preference,char name[10],int id1,int amount);
/**
 * @brief Customer can purchase a ticket 
 */
void show2(int preference,char name[10],int id1,int amount);
/**
 * @brief Customer can purchase a ticket 
 */
void show3(int preference,char name[10],int id1,int amount);
/**
 * @brief A customer can reserve the ticket
 */
void reserveticket(int *,int,int );

/**
 * @brief A customer can cancel the ticket  
 */
void cancelticket(int *); 


#endif /* #define _FUNCTION_H__ */
