#include "data_analysis.h"
#include <stdio.h>

/**
 * mode - Finds the mode (most frequent value) of the array.
 * @arr: The array of values.
 * @size: The number of elements in the array.
 *
 * This function uses the `frequencies` function to calculate the frequency of
 * each value and then determines which value has the highest frequency.
 *
 * Return: The mode value.
 */
int mode(int arr[], int size)
{
    int i, maxFreq = 0, modeValue = -1;
    int freq[9] = {0};  /* Frequency array for values 1-9 */

    frequencies(arr, size, freq, 9);

    for (i = 0; i < 9; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            modeValue = i + 1;  /* Store the most frequent value */
        }
    }

    return modeValue;
}
