#include "data_analysis.h"
#include <stdio.h>

/**
 * bar_chart - Prints a bar chart representing the frequency of each value.
 * @arr: The frequency array (number of occurrences of each value).
 * @size: The size of the frequency array.
 *
 * This function prints a bar for each value in the array, with the length
 * of the bar corresponding to the frequency of that value.
 */
void bar_chart(int arr[], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        printf("Value: %2d, Frequencies: %-2d: ", i + 1, arr[i]);
        for (j = 0; j < arr[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
