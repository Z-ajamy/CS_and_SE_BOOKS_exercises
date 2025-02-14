#include <stdio.h>
#include "square.h"

/**
 * printSquare - Prints a solid square of asterisks.
 * @side: The size of the square (rows and columns).
 *
 * Description: The function uses nested loops to print
 * a square pattern of asterisks based on the given side length.
 * If the side is less than or equal to zero, no square is printed.
 */
void printSquare(int side)
{
    int i, j;

    if (side <= 0)
        return;

    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
            printf("*");
        printf("\n");
    }
}
