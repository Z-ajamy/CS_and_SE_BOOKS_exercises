#include <stdio.h>
#include "min_float.h"

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user to enter three floating-point numbers,
 * finds the smallest using `findMinimum`, and displays the result.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    float num1, num2, num3, min;

    /* Get user input */
    printf("Enter three floating-point numbers: ");
    if (scanf("%f %f %f", &num1, &num2, &num3) != 3)
    {
        printf("Invalid input. Please enter three valid numbers.\n");
        return (1);
    }

    /* Find the minimum value */
    min = findMinimum(num1, num2, num3);

    /* Display the result */
    printf("The smallest number is: %.2f\n", min);

    return (0);
}
