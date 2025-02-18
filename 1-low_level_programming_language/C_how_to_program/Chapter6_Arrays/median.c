#include "data_analysis.h"

/**
 * median - Calculates the median of an array of values.
 * @arr: The array of values.
 * @size: The number of elements in the array.
 *
 * The median is the middle value when the array is sorted. If there is an even
 * number of elements, the median is the average of the two middle values.
 *
 * Return: The median value as a double.
 */
double median(int arr[], int size)
{
    int i;

    /* Sort the array first (this may require calling bubbleSort or another sort function) */
    bubbleSort(arr, size);

    if (size % 2 == 0)
    {
        i = arr[size / 2] + arr[(size / 2) - 1];
        return ((double)i / 2);
    }
    else
    {
        return ((double)arr[(size - 1) / 2]);
    }
}
