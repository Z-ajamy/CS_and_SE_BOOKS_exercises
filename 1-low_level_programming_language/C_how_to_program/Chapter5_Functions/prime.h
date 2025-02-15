#ifndef PRIME_H
#define PRIME_H

/**
 * isPrime_n2 - Checks if a number is prime using division up to n/2.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int isPrime_n2(int n);

/**
 * isPrime_sqrt - Checks if a number is prime using division up to sqrt(n).
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int isPrime_sqrt(int n);

/**
 * printPrimes - Prints all prime numbers up to a given limit using two methods.
 * @limit: The upper limit to find prime numbers.
 */
void printPrimes(int limit);

#endif /* PRIME_H */
