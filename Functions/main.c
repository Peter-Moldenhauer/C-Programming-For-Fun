/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates functions in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void printSomething();  // function prototype

int main()
{
    // functions allows you to break up your code into smaller pieces and organize the code

    // use the function
    printSomething();

    return 0;
}

void printSomething(){
    printf("Hello World from a function");
    return;  // every function needs a return statement - even if you dont return anything you still need a return
}
