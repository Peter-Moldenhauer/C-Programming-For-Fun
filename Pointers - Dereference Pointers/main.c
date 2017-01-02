/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates dereferencing pointers.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int bacon = 19;
    int * pBacon = &bacon; // make a pointer variable

    printf("Address \t Name \t\t Value \n");
    printf("%p \t %s \t\t %d \n", pBacon, "bacon", bacon); // print out info about bacon variable
    printf("%p \t %s \t %p \n", &pBacon, "pBacon", pBacon); // print out info about the POINTER to bacon

    // dereference the pBacon pointer to get the value of 19
    printf("\n*pBacon: %d \n", *pBacon); // go to the address of the variable and get the value of it

    // reset the bacon variable through the pointer...
    *pBacon = 71;

    printf("\n*pBacon: %d \n", *pBacon);   // same as below
    printf("\nbacon: %d \n", bacon);       // same as above

    return 0;
}
