/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates structures. A structure is a way to group a bunch
** of variable types together and they dont need to be the same type. Add a structure in a
** new separate file.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#include "employeeInfo.h"  //include the struct file

int main()
{
    struct user peter;
    struct user rachel;

    peter.userID = 1234;
    rachel.userID = 3456;

    puts("Enter the first name of user 1");
    gets(peter.firstName);
    puts("Enter the first name of user 2");
    gets(rachel.firstName);

    printf("User 1 ID is %d\n", peter.userID);
    printf("User 2 ID is %d\n", rachel.userID);

    printf("User 1 first name is %s\n", peter.firstName);
    printf("User 2 first name is %s\n", rachel.firstName);

    return 0;
}
