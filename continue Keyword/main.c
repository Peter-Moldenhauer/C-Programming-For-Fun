/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates the continue keyword. Continue means "ignore the
** rest of the code in the loop but don't break out of the loop".
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int num = 1;

    do{
        if(num==6 || num==8){
            num++;
            continue;  // if this continue is reached then ignore the rest of the code in loop until a new iteration
        }

        printf("%d is available \n", num);
        num++;
    }while(num<=10);


    return 0;
}
