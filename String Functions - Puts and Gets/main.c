/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates puts and gets - easier than printf() and scanf().
** Puts() prints a string out to the screen and gets() gets a string from the user. In both
** cases the strings CAN contain spaces. Finally, stringcat() can build a new string piece
** by piece.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>  // used for string functions
#include <math.h>

int main()
{
    // scanf() only reads one word strings - once it gets to a space it stops reading in
    // gets() allows you to read strings with spaces

    char personName[50];
    char personFood[25];
    char sentence[75] = "";

    puts("Whats the person's name?" ); // puts automatically adds a new line to the end of the output
    gets(personName);

    puts("Whats the person's favorite food?" );
    gets(personFood);

    strcat(sentence, personName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, personFood);

    puts(sentence);

    return 0;
}
