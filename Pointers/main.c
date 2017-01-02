/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates the use of pointers in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int bacon = 19;

    // print out the memory address of where the bacon variable is...
    printf("%p \n\n", &bacon);    // in order to print out a pointer (memory address), you need to use %p

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", &bacon, "bacon", bacon);

    // create a pointer variable
    int * pBacon = &bacon;

    printf("%p \t %s \t %d \n", pBacon, "bacon", bacon); // will print out the same as above, but using a pointer here
    printf("%p \t %s \t %p \n", &pBacon, "pBacon", pBacon); // print out info about the POINTER to bacon

    return 0;
}
