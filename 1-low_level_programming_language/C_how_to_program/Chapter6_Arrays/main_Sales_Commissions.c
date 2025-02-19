#include "Sales_Commissions.h"
#include <stdio.h>
#define SIZE 9

/**
 * main - Entry point of the Sales Commissions program.
 *
 * Description: This program calculates and categorizes the salaries
 * of salespersons based on their sales amounts and prints the distribution.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int num_of_salespersons, i;
    int salary_distribution[SIZE] = {0};
    double sales;

    printf("Enter the number of salespersons: ");
    scanf("%d", &num_of_salespersons);
    while (getchar() != '\n');


    for (i = 0; i < num_of_salespersons; i++)
    {
        printf("Enter the sales amount for salesperson %d: ", i + 1);
        scanf("%lf", &sales);
        while (getchar() != '\n');

        if (Sales_Commissions(salary_distribution, sales))
        {
            printf("Invalid sales amount. Please enter a non-negative value.\n");
            i--; /* Repeat entry for the same salesperson */
        }
    }

    print_Sales_Array(salary_distribution, SIZE);
    return (0);
}
