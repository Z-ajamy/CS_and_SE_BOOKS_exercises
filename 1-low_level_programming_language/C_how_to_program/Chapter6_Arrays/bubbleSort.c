#include "data_analysis.h"

/**
 * bubbleSort - Sorts an array in ascending order using the bubble sort algorithm.
 * @arr: The array to sort.
 * @size: The number of elements in the array.
 *
 * This function compares adjacent elements and swaps them if they are in the wrong
 * order. The process repeats until no swaps are needed.
 */
void bubbleSort(int arr[], int size)
{
    int i, j, temp, swap;

    for (i = 0; i < size - 1; i++)
    {
        swap = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)  /* Break early if no swaps were made */
        {
            break;
        }
    }
}
