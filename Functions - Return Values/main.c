/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates return values.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int calculateBonus(int yearsWorked);

int main(){

    int peterBonus = calculateBonus(14);
    int rachelBonus = calculateBonus(2);

    printf("Peter gets $%d for a bonus\n", peterBonus);
    printf("Rachel gets $%d for a bonus\n", rachelBonus);

    return 0;
}

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;

    if(yearsWorked > 10){
        bonus += 1000;
    }

    return bonus;
}
