#include <stdio.h>
#include <math.h>
#include "prime.h"

/**
 * isPrime_n2 - Checks if a number is prime using division up to n/2.
 * @n: The number to check.
 *
 * Description: A naive approach that checks divisibility up to n/2.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int isPrime_n2(int n)
{
    int i;

    if (n < 2)
        return (0);
    if (n == 2)
        return (1);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}

/**
 * isPrime_sqrt - Checks if a number is prime using division up to sqrt(n).
 * @n: The number to check.
 *
 * Description: A more efficient approach that checks divisibility up to sqrt(n).
 *
 * Return: 1 if prime, 0 otherwise.
 */
int isPrime_sqrt(int n)
{
    int i;

    if (n < 2)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0); /* Eliminate even numbers except 2 */

    for (i = 2; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}

/**
 * printPrimes - Prints all prime numbers up to a given limit using two methods.
 * @limit: The upper limit to find prime numbers.
 *
 * Description: Compares the naive method (n/2) and the optimized method (sqrt(n))
 * for counting primes and estimating performance improvement.
 */
void printPrimes(int limit)
{
    int i, count_n2 = 0, count_sqrt = 0;

    printf("Prime numbers (Naive method - n/2):\n");
    for (i = 1; i <= limit; i++)
    {
        if (isPrime_n2(i))
        {
            printf("%d ", i);
            count_n2++;
        }
    }
    printf("\nTotal primes found: %d\n\n", count_n2);

    printf("Prime numbers (Optimized method - sqrt(n)):\n");
    for (i = 1; i <= limit; i++)
    {
        if (isPrime_sqrt(i))
        {
            printf("%d ", i);
            count_sqrt++;
        }
    }
    printf("\nTotal primes found: %d\n\n", count_sqrt);
}
