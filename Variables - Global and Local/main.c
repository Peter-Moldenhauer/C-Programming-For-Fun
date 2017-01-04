/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates global and local variables in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void printSomething();  // function prototype

int tuna = 6; // global variable - any function in and outside of main can use this variable

int main(){

    //int tuna = 6; //if tuna variable was declared in main (local) then the function outside of main could not use it
    printf("I have %d cans of tuna\n", tuna);

    // use the function
    printSomething();



    return 0;
}

void printSomething(){
    printf("Hello World from a function\n");
    printf("I have %d cans of tuna\n", tuna); // can use the tuna variable because it is a global variable

    return;  // every function needs a return statement - even if you dont return anything you still need a return
}
