#include "header.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int result;
    int exponent, base;
    int is_invalid = 0; /* Using int instead of bool for C90 compliance */

    printf("Please enter the base: ");
    scanf("%d", &base);

    do {
        if (is_invalid)
        {
            printf("Exponent must be non-negative!\n");
        }

        printf("Please enter the exponent: ");
        scanf("%d", &exponent);
        is_invalid = 1;

    } while (exponent < 0);

    result = exponentiation(base, exponent);
    printf("The result = %ld\n", result);

    return (0);
}
