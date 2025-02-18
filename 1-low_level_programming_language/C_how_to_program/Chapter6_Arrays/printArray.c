#include "data_analysis.h"
#include <stdio.h>

/**
 * printArray - Prints the elements of an array.
 * @arr: The array to print.
 * @size: The number of elements in the array.
 *
 * This function iterates through the array and prints the elements,
 * separated by commas.
 */
void printArray(int arr[], int size)
{
    int i;

    printf("{");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}
