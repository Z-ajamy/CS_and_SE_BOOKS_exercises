#include <stdio.h>
#include "digits.h"

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user for an integer between 1 and 32767,
 * then prints the number with each digit separated by two spaces.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int num;

    printf("Enter an integer (1 - 32767): ");
    if (scanf("%d", &num) == 1 && num >= 1 && num <= 32767)
    {
        printDigits(num);
    }
    else
    {
        printf("Invalid input. Please enter a number between 1 and 32767.\n");
    }

    return (0);
}
