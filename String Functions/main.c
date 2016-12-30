/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates strcat and strcpy.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>  // used for string functions
#include <math.h>

int main()
{
    // string functions examples...

    char ham[100] = "Hello ";

    strcat(ham, "Peter "); // add the Peter string to the Hello (ham) string
    strcat(ham, "how are you? "); // add more to the ham string
    printf("%s \n", ham); // prints: Hello Peter how are you?

    strcpy(ham, "C programming is fun");  // this replaces one string with another string
    printf("%s \n", ham); // prints: C programming is fun (this takes place of the old string)

    return 0;
}
