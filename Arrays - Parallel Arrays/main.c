/*******************************************************************************************
** Name: Peter Moldenhauer
** Date: 12/30/16
** Description: This program demonstrates parallel arrays.
********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>  // used to round numbers

int main()
{
    int i;
    int player[5] = {58, 66, 68, 71, 87};  // an array to represent hockey players (by jersey number)
    int goals[5] = {36, 39, 25, 29, 31};  // array of goals (points) that each corresponding player has
    int gamesPlayed[5] = {30, 30, 28, 30, 26}; // array of how many games each player played
    float ppg[5]; // an array of points per game each player has
    float bestPPPG = 0.0; // float variable for the best players points per game
    int bestPlayer; // int variable for the best player

    // for loop to loop through all of the players (jersey numbers) and calculate their points per game average
    for(i=0; i<5; i++){ // loop 5 times, once for each player
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i]; // type cast to float the goals and gamesPlayed array elements
        printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

        // use if statement to calculate the best player (instead of just manually looking through the above table to see for yourself)
        if(ppg[i] > bestPPPG){
            bestPPPG = ppg[i];
            bestPlayer = player[i];
        }
    }

    // print out final result
    printf("\nThe best player is %d \n", bestPlayer);

    return 0;
}
