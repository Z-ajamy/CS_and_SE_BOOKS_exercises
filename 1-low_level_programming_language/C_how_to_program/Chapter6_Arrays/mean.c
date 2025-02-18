#include "data_analysis.h"

/**
 * mean - Calculates the arithmetic mean (average) of an array of values.
 * @arr: The array of values.
 * @size: The number of elements in the array.
 *
 * This function sums the values in the array and divides by the number of
 * elements to calculate the mean.
 *
 * Return: The mean of the values as a double.
 */
double mean(int arr[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return ((double)sum / size);
}
