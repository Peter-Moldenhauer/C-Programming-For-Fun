/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates typecasting. With typecasting you can
** temporarily change the data type of a variable. Ex. floats into ints
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avgProfit;
    int priceofPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    avgProfit = ((float)priceofPumpkin * (float)sales) / (float)daysWorked; //temporarily all variables into float variables
    // This does not change it permanently into a float, just the above instance of the variable

    printf("Average dily profit: $%.2f", avgProfit);

    return 0;
}
