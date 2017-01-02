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
    char movie1[] = "The Return of the Jedi";  // movie1 is a constant

    // cant do this...
    //movie1[] = "Star Wars"; // cant reassign movie1 because it is a constant

    //cant do this either...
    //movie1 = "Star Wars";

    // Create a pointer with a sting value
    char * movie2 = "Indiana Jones and the Temple of Doom"; // movie2 is NOT a constant

    // can do this
    puts(movie2); // puts takes the movie2 variable and prints it to the screen

    // can also do this
    movie2 = "New Movie Title";
    puts(movie2);

    return 0;
}
