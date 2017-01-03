/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates reading files in C.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("bacon.txt", "r");  // read from the bacon.txt file

    char singleLine[150]; // variable to store a line of text from the text file

    // read a file line by line - keep looping until the end of the file is reached
    while(!feof(fPointer)){  // feof means file end of file
        fgets(singleLine, 150, fPointer);   // fgets gets 1 line just as it does in the command line
        puts(singleLine);  // print out the singleLine text to the screen
    }

    fclose(fPointer);

    return 0;
}
