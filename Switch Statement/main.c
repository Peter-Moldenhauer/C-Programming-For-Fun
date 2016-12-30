/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates the switch statement. The switch is very similar
** to an if/else if statement.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char grade = 'C';

    switch(grade){
        case 'A' :
            printf("Good job you got an A!\n");
            break;
        case 'B' :
            printf("Pretty Good, you got a B!\n");
            break;
        case 'C' :
            printf("You did OK, you got a C\n");
            break;
        case 'D' :
            printf("You didn't do well, you got a D\n");
            break;
        case 'F' :
            printf("You failed! You got an F!\n");
            break;
        default : printf("Did not get A - F...thats weird\n"); // run this if none of other cases match up
    }

    return 0;
}
