/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates passing arguments to functions. This program
** converts a Euro amount to the corresponding US Dollar amount.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void convertToDollars(float euro); // function prototype

int main(){

    float euroPrice1 = 1.00;
    float euroPrice2 = 5.50;

    convertToDollars(euroPrice1);
    convertToDollars(euroPrice2);

    return 0;
}

// take an amount of Eurs, converts to US Dollars and prints result to screen
void convertToDollars(float euro){
    float usDollars = euro * 1.37;
    printf("%.2f Euros - %.2f US Dollars\n", euro, usDollars);

    return;
}
