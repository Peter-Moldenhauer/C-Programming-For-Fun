/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates calculating the average age.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    // assign a value to multiple variables:
    a = b = c = 100;

    printf("%d %d %d \n", a, b, c);

    // calculate the average age:
    float age1, age2, age3, average;
    age1 = age2 = 4.0;

    printf("Enter your age\n");
    scanf("%f", &age3);

    average = (age1 + age2 + age3) / 3;
    printf("The average age is %.2f\n", average);  // put .2 inbetween % and f to limit to 2 decimal spots

    return 0;
}
