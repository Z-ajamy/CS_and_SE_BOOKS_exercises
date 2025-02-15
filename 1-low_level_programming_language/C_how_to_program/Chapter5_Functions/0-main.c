#include <stdio.h>
#include "even_odd.h"

/**
 * main - Entry point of the program.
 *
 * Description: Reads a series of integers from the user and
 * checks if they are even or odd using isEven function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int num;

    printf("Enter integers (Ctrl+D to stop):\n");
    while (scanf("%d", &num) == 1)
    {
        if (isEven(num))
            printf("%d is even.\n", num);
        else
            printf("%d is odd.\n", num);
    }

    return (0);
}
