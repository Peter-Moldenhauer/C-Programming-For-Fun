/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/28/16
** Description: This program demonstrates a do while loop. With do while loops, the code
** runs at least once before the test occurs.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade = 0; // keeps running score of all grades
    float scoreEntered = 0;
    float numberOfTests = 0;
    float average = 0;

    printf("Press 0 when complete. \n\n");

    do{
        printf("Test:%.0f  Average:%.2f  \n", numberOfTests, average);
        printf("\nEnter test score: ");
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        numberOfTests++;
        average = grade / numberOfTests;
    }while(scoreEntered != 0);

    return 0;
}
