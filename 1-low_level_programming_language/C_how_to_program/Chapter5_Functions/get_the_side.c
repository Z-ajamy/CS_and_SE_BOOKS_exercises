#include "Hypotenuse_Calculations.h"
#include <stdio.h>

/**
 * get_the_side - Gets a side length from the user
 * @i: The side index (1 for first, 2 for second)
 *
 * Return: The entered side length
 */
double get_the_side(int i)
{
    double n;

    printf("Enter the %d%s number: ", i, (i == 1) ? "st" : "nd");
    scanf("%lf", &n);

    return n;
}
