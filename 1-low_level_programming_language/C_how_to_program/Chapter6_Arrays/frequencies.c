#include "data_analysis.h"

/**
 * frequencies - Calculates the frequency of each value in the response array.
 * @arr1: The array of responses.
 * @size1: The size of the response array.
 * @arr2: The array to store the frequencies.
 * @size2: The size of the frequency array (should be 9 for values 1-9).
 *
 * This function loops through the `arr1` and counts how many times each
 * value appears, updating the frequency array `arr2`.
 */
void frequencies(int arr1[], int size1, int arr2[], int size2)
{
    int i;

    for (i = 0; i < size1; i++)
    {
        if (arr1[i] - 1 < size2)  /* Check if the value is within the range 1-9 */
        {
            arr2[arr1[i] - 1]++;
        }
    }
}
