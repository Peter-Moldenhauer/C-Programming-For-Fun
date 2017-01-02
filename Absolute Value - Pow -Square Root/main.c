/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates absolute value (abs function), pow function and
** the sqrt function.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    int year1;
    int year2;
    int age;

    printf("Enter a year \n");
    scanf(" %d", &year1);

    printf("Enter another year \n");
    scanf(" %d", &year2);

    age = year1 - year2;
    printf("%d \n", age);
    age = abs(age);            // abs() is the absolute value function
    printf("%d \n", age);

    printf("%f \n", pow(5,3));  // print the float number of 5 to the 3rd power, this equals 125.0000000

    printf("%f \n", sqrt(144));  // prints the square root of 144, this equals 12.0000000000

    return 0;
}
