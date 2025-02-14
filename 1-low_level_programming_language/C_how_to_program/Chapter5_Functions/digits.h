#ifndef DIGITS_H
#define DIGITS_H

/**
 * quotient - Calculates the integer quotient when a is divided by b.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The integer quotient of a divided by b.
 */
int quotient(int a, int b);

/**
 * remainder - Calculates the remainder when a is divided by b.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of a divided by b.
 */
int _remainder(int a, int b);

/**
 * printDigits - Prints an integer as a series of digits with two spaces in between.
 * @num: The integer to be printed (between 1 and 32767).
 *
 * Description: This function extracts and prints each digit separately
 * with two spaces in between, preserving the original order.
 */
void printDigits(int num);

#endif /* DIGITS_H */
