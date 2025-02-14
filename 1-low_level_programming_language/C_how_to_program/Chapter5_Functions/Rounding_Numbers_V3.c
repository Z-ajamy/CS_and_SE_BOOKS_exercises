#include <stdio.h>
#include <math.h>

/* Function prototypes */
int get_num_of_nums(void);
double get_nums(int i);
void round_loop(int number_of_repetitions, int approximation_level);
int get_num_of_approximation_level(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_of_nums, approximation_level;

	num_of_nums = get_num_of_nums();
	approximation_level = get_num_of_approximation_level();
	round_loop(num_of_nums, approximation_level);

	return (0);
}

/**
 * get_num_of_nums - Gets a positive integer from the user
 *
 * Return: The positive integer entered by the user
 */
int get_num_of_nums(void)
{
	int x, ch = 0;

	do {
		if (ch == 0)
			printf("Welcome! ");
		else
			printf("This is not a positive number.\n");

		printf("Give me the number of numbers: ");
		scanf("%d", &x);
		ch++;
	} while (x <= 0);

	return (x);
}

/**
 * round_loop - Loops through numbers, gets input, and rounds it
 * @number_of_repetitions: Number of times to repeat input and rounding
 * @approximation_level: Number of decimal places for rounding
 */
void round_loop(int number_of_repetitions, int approximation_level)
{
	double n;
	int i;

	for (i = 1; i <= number_of_repetitions; i++)
	{
		n = get_nums(i);
		n = round(n * pow(10, approximation_level)) / pow(10, approximation_level);
		printf("%.*f\n", approximation_level, n);
	}
}

/**
 * get_nums - Gets a floating-point number from the user
 * @i: The index of the number being requested
 *
 * Return: The floating-point number entered by the user
 */
double get_nums(int i)
{
	double n;

	printf("Give me the %d%s number: ", i, (i == 1) ? "st" :
	       (i == 2) ? "nd" :
	       (i == 3) ? "rd" : "th");
	scanf("%lf", &n);

	return (n);
}

/**
 * get_num_of_approximation_level - Gets the number of decimal places for rounding
 *
 * Return: The integer representing decimal places (0 to 15)
 */
int get_num_of_approximation_level(void)
{
	int n, i = 0;

	do {
		if (i != 0)
			printf("Not available. Please enter a value between 0 and 15.\n");

		printf("Give me the number of approximation levels (Max 15): ");
		scanf("%d", &n);
		i++;
	} while (n < 0 || n > 15);

	return (n);
}
