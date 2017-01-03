/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates the heap. In this program the user can enter how
** many numbers to enter and then numbers that number of integers. The program then averages
** the numbers that the user enters.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, howMany;
    int total;
    float average = 0.0;
    int * pointsArray;

    printf("How many numbers do you want to average?\n");
    scanf(" %d", &howMany); // the number of integers to average is in howMany variable

    // go to the heap and create an array that is howMany numbers big...
    // if user enters 5 then create an array that is 5 ints big
    pointsArray = (int *) malloc(howMany * sizeof(int)); // this array is now expandable based on user input
    // can treat pointsArray as a normal array now...ex: can do pointsArray[0], pointsArray[3]...

    // Enter the numbers (elements) in the array
    printf("Enter the numbers now...\n");
    for(i=0; i<howMany; i++){
        scanf(" %d", &pointsArray[i]);
        total += pointsArray[i];   // used to figure out the average of numbers later on
    }

    //find average
    average = (float)total / (float)howMany; // typecast both total and howMany to float types - these were ints before
    printf("The average of the numbers is: %f", average);

    free(pointsArray);

    return 0;
}
