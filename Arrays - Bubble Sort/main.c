/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates sorting an array with bubble sort.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    // in C there is not a built in function to sort arrays so you need to create your own
    // Bubble sort function to sort random numbers in array in ascending order

    int i, temp, swapped;
    int howMany = 10;  // how many elements are in the array
    int myArray[howMany];

    // create the array
    for(i=0; i<howMany; i++){
        myArray[i] = ( rand()%25 ) + 1;  // assign each array element a random number in the range of 1 to 25
    }

    // print out the array
    printf("Original List:\n");
    for(i=0; i<howMany; i++){
        printf("%d \n", myArray[i]);
    }

    while(1){  // infinite loop, 1 is the same as true...use a break statement to stop loop

        swapped = 0; // when swapped = 0 at the end that means the list is sorted

        //main sorting algorithm
        for(i=0; i<howMany-1; i++){

            if(myArray[i]>myArray[i+1]){
                temp = myArray[i];
                myArray[i] = myArray[i+1];
                myArray[i+1] = temp;
                swapped = 1;   // whenever you swap a number it means that the list is not in order yet, so do it again
            }

        }

        // break out of infinite loop if array is completely sorted
        if(swapped == 0){
            break;
        }
    }

    // print out sorted array
    printf("\nSorted List:\n");
    for(i=0; i<howMany; i++){
        printf("%d \n", myArray[i]);
    }

    return 0;
}
