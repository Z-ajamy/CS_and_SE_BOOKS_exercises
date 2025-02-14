#include <stdio.h>
#include "square.h"

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user to enter the size of the square
 * and then prints the corresponding square pattern.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int side;

    printf("Enter the size of the square: ");
    if (scanf("%d", &side) == 1)
    {
        printSquare(side);
    }
    else
    {
        printf("Invalid input. Please enter a valid integer.\n");
    }

    return (0);
}
