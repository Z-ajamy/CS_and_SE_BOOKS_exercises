#include "Hypotenuse_Calculations.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    double a, b, c;

    a = get_the_side(1);
    b = get_the_side(2);

    c = hypotenuse_calculations(a, b);

    printf("Hypotenuse: %.2f\n", c);

    return (0);
}
