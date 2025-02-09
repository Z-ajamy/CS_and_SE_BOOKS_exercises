/*
 * File: craps_game.c
 * Author: Your Name
 * Description: A simple dice game simulation following the Betty coding style.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/* Function prototypes */
int Rolldice(void);
int Res(int two_rolls);
int Point(int point);
 
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
    int sum, dice1, dice2, res;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Roll the dice for the first time */
    dice1 = Rolldice();
    dice2 = Rolldice();
    sum = dice1 + dice2;
    res = Res(sum);
    printf("First roll: %d + %d = %d\n", dice1, dice2, sum);

    /* Check for an immediate win or loss */
    if (res == 1)
    {
        printf("🎉You win!\n");
    }
    else if (res == 0)
    {
        printf("💀You lose!\n");
    }
    else
    {
        res = Point(sum);
        if (res == 1)
        {
            printf("🎉You win!\n");
        }
        else if (res == 0)
        {
            printf("💀You lose!\n");
       }
    }
   
   return (0);
}
 
/*
 * Rolldice - Simulates rolling a single die.
 *
 * Return: A random integer between 1 and 6.
 */
int Rolldice(void)
{
    return (1 + rand() % 6);
}
 
/*
 * Res - Determines the result of the first dice roll.
 *
 * @two_rolls: The sum of two dice rolls.
 *
 * Return: 1 if win, 0 if lose, or the point value.
*/
int Res(int two_rolls)
{
    if (two_rolls == 7 || two_rolls == 11)
        return (1); /* Win */
    else if (two_rolls == 2 || two_rolls == 3 || two_rolls == 12)
        return (0); /* Lose */
    return (two_rolls); /* Point */
}

/*
 * Point - Continues rolling until player wins or loses.
 *
 * @point: The point value to match.
 *
 * Return: 1 if the player wins, 0 if the player loses.
*/
int Point(int point)
{
    int sum, dice1, dice2;
    
   while (1)
    {
        dice1 = Rolldice();
        dice2 = Rolldice();
        sum = dice1 + dice2;

        /* Display the roll result */
        printf("🎲Rolled: %d + %d = %d\n", dice1, dice2, sum);

        if (sum == 7)
        {
            return (0); /* Lose */
        }
        else if (sum == point)
        {
            return (1); /* Win */
        }
    }
} 
