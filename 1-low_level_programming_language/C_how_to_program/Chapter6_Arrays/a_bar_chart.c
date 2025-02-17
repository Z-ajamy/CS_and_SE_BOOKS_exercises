#include "main.h"
#include <stdio.h>

/**
 * a_bar_chart - Displays a bar chart based on user-provided frequencies.
 * @size: The number of frequency values to collect and display.
 *
 * Description: The function asks the user to enter 'size' number of
 * frequencies (each ≤ 110). Then, it prints a bar chart using asterisks.
 */
void a_bar_chart(int size)
{
    int i, n;
    int a[size];

    /* Collecting user input */
    for (i = 0; i < size; i++)
    {
        do
        {
            printf("Please enter the %d%s frequency (max 110): ", 
                i + 1,
                ((i + 1) % 10 == 1 && (i + 1) % 100 != 11) ? "st" :
                ((i + 1) % 10 == 2 && (i + 1) % 100 != 12) ? "nd" :
                ((i + 1) % 10 == 3 && (i + 1) % 100 != 13) ? "rd" : "th");

            if (scanf("%d", &a[i]) != 1)  /* Ensuring valid input */
            {
                printf("Invalid input. Please enter an integer.\n");
                while (getchar() != '\n'); /* Clearing buffer */
                a[i] = -1; /* Force loop to repeat */
            }
        } while (a[i] > 110 || a[i] < 0);
    }

    /* Printing bar chart */
    for (i = 0; i < size; i++)
    {
        printf("%d%s : ", 
            i + 1,
            ((i + 1) % 10 == 1 && (i + 1) % 100 != 11) ? "st" :
            ((i + 1) % 10 == 2 && (i + 1) % 100 != 12) ? "nd" :
            ((i + 1) % 10 == 3 && (i + 1) % 100 != 13) ? "rd" : "th");

        for (n = 0; n < a[i]; n++)
        {
            printf("*");
        }
        printf("\n");
    }
}
