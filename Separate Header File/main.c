/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates how to create a header file.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "myHeaderFile.h"  // include header file with this program

#define MYNAME "Peter Moldenhauer"  // example of how to create a constant

int main()
{
    // print with constant defined in this main file
    printf("My name is %s\n", MYNAME);

    // print with constants defined in separate header file
    printf("My name is %s, I am %d years old and my favorite food is %s\n", MYNAME, MYAGE, FAVFOOD);

    return 0;
}
