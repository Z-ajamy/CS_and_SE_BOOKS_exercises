#include <stdio.h>
#include "multiples.h"

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user to enter pairs of integers
 * and checks if the second is a multiple of the first.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int num1, num2;

    
    while (1)
    {
        printf("Enter pairs of integers (Ctrl+D to stop):\n");
        printf("Enter first integers: ");

        scanf("%d", &num1);
        printf("Enter second integers: ");

        scanf("%d", &num2);

        if (isMultiple(num1, num2))
            printf("%d is a multiple of %d\n\n", num2, num1);
        else
            printf("%d is NOT a multiple of %d\n\n", num2, num1);
    }

    return (0);
}
