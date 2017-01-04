/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates pass by reference vs pass by value. These are the
** two different ways you can pass variables into functions.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void passByValue(int i);
void passByReference(int *i);

int main(){

    int tuna = 20; // take the tuna variable and pass it to both of the functions

    passByValue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);

    passByReference(&tuna);
    printf("Passing by reference, tuna is now %d\n", tuna);

    return 0;
}

void passByValue(int i){
    i = 99;  // this doesnt do anything and doesnt matter
    return;
}

void passByReference(int *i){
    *i = 56;  // dereference i to reset the value
    return;
}
