/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates some character functions.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // tests if a variable is an int or a char
#include <string.h>
#include <math.h>

int main()
{
    int beef = 'g'; // NOTE: b is not an int but this still works...

    if( isalpha(beef) ){

        printf("%c is a letter\n", beef); // ints and chars can be used interchangably, note the %c not %d
        if( isupper(beef) ){
            printf("%c is an uppercase letter\n", beef);
        }else{
            printf("%c is a lowercase letter\n", beef);
        }

    }else{

        if( isdigit(beef) ){
            printf("%c is a number\n", beef);
        }else{
            printf("%c is a symbol\n", beef);
        }

    }
	
	// take a lowercase letter and covert to an uppercase letter example

    char a = 'a';
    char b = 'F';
    char c = '5';

    printf("%c \n", toupper(a) );  // turns a into A
    printf("%c \n", toupper(b) );  // does nothing to b, b stays at F
    printf("%c \n", toupper(c) );  // does nothing to c, c stays at 5

    return 0;
}
