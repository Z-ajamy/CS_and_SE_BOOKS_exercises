#include "Sales_Commissions.h"

/**
 * Sales_Commissions - Categorizes a salesperson's salary into salary ranges.
 * @arr: Array to store the number of salespersons in each range.
 * @sales: The sales amount of the salesperson.
 *
 * Description: This function calculates the salesperson's salary
 * (Base salary of $200 + 9% commission) and increments the corresponding
 * salary range count in the given array.
 *
 * Return: 0 if successful, 1 if the sales amount is invalid.
 */
int Sales_Commissions(int arr[], double sales)
{
    double salary;
    int index;

    if (sales < 0)
        return (1);

    salary = 200 + (sales * 0.09);

    if (salary < 300)
        index = 0;
    else if (salary < 400)
        index = 1;
    else if (salary < 500)
        index = 2;
    else if (salary < 600)
        index = 3;
    else if (salary < 700)
        index = 4;
    else if (salary < 800)
        index = 5;
    else if (salary < 900)
        index = 6;
    else if (salary < 1000)
        index = 7;
    else
        index = 8;

    arr[index]++;
    return (0);
}
