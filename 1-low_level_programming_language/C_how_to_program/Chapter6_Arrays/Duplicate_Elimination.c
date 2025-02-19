#include "Duplicate_Elimination.h"

/**
 * Duplicate_Elimination - Removes duplicates from arr1 and stores unique values in arr2
 * @arr1: The input array containing original elements.
 * @arr2: The output array where unique elements will be stored.
 * @size1: The size of the input array.
 * @size2: The maximum size of arr2 (should be <= size1).
 *
 * Description: This function iterates through arr1 and adds only unique
 * elements to arr2, ensuring no duplicates are stored.
 * It assumes arr2 has enough space to store the unique values.
 */
void Duplicate_Elimination(int arr1[], int arr2[], int size1, int size2)
{
    int i, j, key, k = 0;
    int found;

    for (i = 0; i < size1 && k < size2; i++)
    {
        found = 0;
        key = arr1[i];

        for (j = 0; j < k; j++)
        {
            if (arr2[j] == key)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            arr2[k] = key;
            k++;
        }
    }
}
