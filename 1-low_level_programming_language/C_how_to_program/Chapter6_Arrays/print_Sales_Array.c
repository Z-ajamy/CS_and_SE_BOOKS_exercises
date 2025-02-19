#include "Sales_Commissions.h"
#include <stdio.h>

/**
 * print_Sales_Array - Prints the salary distribution of salespersons.
 * @arr: Array containing the count of salespersons in each salary range.
 * @size: The size of the array.
 *
 * Description: This function prints a table showing the number of
 * salespersons earning salaries in predefined salary ranges.
 */
void print_Sales_Array(int arr[], int size)
{
    int i;
    int ranges[9] = {200, 300, 400, 500, 600, 700, 800, 900, 1000};

    printf("\n\n📊 Salaries Distribution 📊\n");
    printf("---------------------------------------\n");
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("$%d - $%d : %d\n", ranges[i], ranges[i] + 99, arr[i]);
        else
            printf("$1000 and above: %d\n", arr[i]);
    }
    printf("---------------------------------------\n");
}
