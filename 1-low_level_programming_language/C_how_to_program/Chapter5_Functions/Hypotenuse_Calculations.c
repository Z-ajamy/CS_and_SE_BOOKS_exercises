#include "Hypotenuse_Calculations.h"
#include <math.h>

/**
 * hypotenuse_calculations - Calculates the hypotenuse using the Pythagorean theorem
 * @side_1: Length of the first side
 * @side_2: Length of the second side
 *
 * Return: Length of the hypotenuse
 */
double hypotenuse_calculations(double side_1, double side_2)
{
    return sqrt(pow(side_1, 2) + pow(side_2, 2));
}
