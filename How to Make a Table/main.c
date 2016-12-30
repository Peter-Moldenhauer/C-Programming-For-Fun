/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates how to make a table.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int columns;
    int rows;
    int cellNumber = 0;

    // create a table with 6 rows and 4 columns in each row, total of 24 elements
    for(rows=1; rows<=6; rows++){

        for(columns=1; columns<=4; columns++){
            cellNumber++;
            printf("  %d  ", cellNumber);
        }

        printf("\n");
    }

    return 0;
}
