/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates strings and pointers. Whenever you make a pointer
** to a string, the string is a variable and you can change it...unlike a regular array in
** which its a constant and cannot be easily changed.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char movie [20];
    char * pMovie = movie; // remember dont use & in front of movie, it is an array and doesnt need it!

    // What happens when the user enters a string that is longer than 20 characters?...not good...
    // To prevent this you need to do the following...

    fgets(pMovie, 20, stdin); // job of this function is to get input from user and if more than a certain amount is entered, it cuts it off
    // gets just gets input in from user from keyboard into the pMovie variable

    //print out to screen
    puts(pMovie);


    return 0;
}
