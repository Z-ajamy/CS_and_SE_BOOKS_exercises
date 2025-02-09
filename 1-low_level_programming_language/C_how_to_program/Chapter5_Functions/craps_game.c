/*
 * File: craps_game.c
 * Author: Your Name
 * Description: A simple dice game simulation based on the game of Craps.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /*
  * main - Entry point of the program
  *
  * Description: Simulates a dice game where the player rolls two dice.
  * Winning and losing conditions are determined based on the sum of the dice rolls.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
    int dice1, dice2, sum, point;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Roll the dice for the first time */
    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;
    sum = dice1 + dice2;
 
    /* Display the first roll result */
    printf("First roll: %d + %d = %d\n", dice1, dice2, sum);

    /* Check for an immediate win or loss */
    if (sum == 7 || sum == 11)
    {
        printf("🎉You win!\n");
        return (0);
    }
    else if (sum == 2 || sum == 3 || sum == 12)
    {
        printf("💀You lose!\n");
        return (0);
    }

    /* Set the point */
    point = sum;
    printf("🎯Your point is: %d\n", point);
     
    /* Continue rolling until player wins or loses */
    while (1)
    {
        dice1 = 1 + rand() % 6;
       dice2 = 1 + rand() % 6;
        sum = dice1 + dice2;

        /* Display the roll result */
        printf("🎲Rolled: %d + %d = %d\n", dice1, dice2, sum);

        /* Check for win or loss conditions */
        if (sum == 7)
        {
            printf("💀You lose!\n");
            break;
        }
        else if (sum == point)
        {
            printf("🎉You win!\n");
            break;
        }
    }
    return (0);
}
