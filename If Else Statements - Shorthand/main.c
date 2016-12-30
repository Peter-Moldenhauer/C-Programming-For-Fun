/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates making decisions shorthand if else statements.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // shorthand if else statement syntax:
    // (test) ? trueCode : falseCode;

    char lastName[20];
    printf("Enter your last name: \n");
    scanf(" %s", lastName);  // don't use a & symbol in front of lastName because it is an array

    // test to see if the first letter of lastName is less than or greater than M
    // Note: lastName[0] refers to the first letter of lastName (since its an array)
    (lastName[0] < 'M') ? printf("You are on the Blue Team") : printf("You are on the Red Team");

    // Another example...print out friend or friends in the correct context
    int friends = 87;

    // use shorthand if statement to say, if friends != 1 then print friends, if not then print friend (blank instead of adding the s)
    printf("\nI have %d friend%s", friends, (friends!=1) ? "s" : "");

    return 0;
}
