/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates getting input with scanf
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20];
    char food[20];
    int numberOfDays;

    printf("What is your name? \n");
    scanf("%s", firstName);  // allows user to input a string for the firstName variable

    printf("What is your favorite food? \n");
    scanf("%s", food);

    printf("How many days in a row can you eat %s? \n", food);
    scanf("%d", &numberOfDays); // need to use the & in front of every variable except arrays

    printf("Your name is %s and you can eat %s for %d days in a row.\n", firstName, food, numberOfDays);

    return 0;
}
