#include "Duplicate_Elimination.h"
#include <stdio.h>

/**
 * main - Entry point for the Duplicate Elimination program
 *
 * Description: This program initializes an array with numbers,
 * removes duplicates, and stores the unique values in another array.
 * It then prints both arrays for verification.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int input_array[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9,
        5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7,
        8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9,
        2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9,
        4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5,
        3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

    int unique_array[9] = {0};

    /* Remove duplicates from input_array and store in unique_array */
    Duplicate_Elimination(input_array, unique_array, 99, 9);

    /* Print original array */
    printf("Original Array:\n");
    printArray(input_array, 99);

    /* Print array with unique values */
    printf("\nUnique Values:\n");
    printArray(unique_array, 9);

    return (0);
}
