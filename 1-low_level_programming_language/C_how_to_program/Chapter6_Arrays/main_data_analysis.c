#include "data_analysis.h"
#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * This program takes an array of responses and calculates:
 * - Frequencies of values (1-9).
 * - Arithmetic mean.
 * - Median.
 * - Mode.
 * - Displays bar chart of frequencies.
 * - Sorts the responses using bubble sort.
 *
 * Return: Always returns 0 (success).
 */
int main(void)
{
    double _mean, _med, _mod;
    int frequency[9] = {0};  /* Initialize frequency array for 1-9 values */
    int response[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9,
         5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7,
         8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9,
         2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9,
         4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5,
         3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

    /* Calculate frequencies of response values (1-9) */
    frequencies(response, 99, frequency, 9);
    printf("The frequencies:-\n");
    printArray(frequency, 9);

    /* Print unsorted responses */
    printf("The unsorted responses:-\n");
    printArray(response, 99);

    /* Sort the responses */
    bubbleSort(response, 99);
    printf("The sorted responses:-\n");
    printArray(response, 99);

    /* Print bar chart of frequencies */
    printf("The bar chart frequencies:-\n");
    bar_chart(frequency, 9);

    /* Calculate and print mean */
    _mean = mean(response, 99);
    printf("The Arithmetic mean: %.2f\n", _mean);

    /* Calculate and print median */
    _med = median(response, 99);
    printf("The median: %.2f\n", _med);

    /* Calculate and print mode */
    _mod = mode(response, 99);
    printf("The mode: %.2f\n", _mod);

    return 0;
}
