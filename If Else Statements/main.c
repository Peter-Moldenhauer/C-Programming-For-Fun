/*******************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates making decisions using if statements.
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your gender? (m/f)\n");
    scanf(" %c", &gender);

    if(age >= 18){
        printf("You may enter this website ");

        //nested if statement
        if(gender == 'm'){
            printf("dude");
        }else if(gender == 'f'){  // else if statement
            printf("lady");
        }else{
            printf("Error, didn't enter m or f");  // else statement
        }
    }else{
        printf("Nothing to see here");  // else statement
    }

    if( (age > 50) && (gender == 'm') ){  // if statement with multiple tests (conditions)
        printf("\nYou are an old man\n");
    }

    if( (gender == 'f') || (gender == 'm') ){  // if statement with multiple tests (conditions)
        printf("Congrats you entered m or f\n");
    }

    return 0;
}
