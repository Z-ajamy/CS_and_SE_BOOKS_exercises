#include <stdio.h>
#include <math.h>

/* Function prototypes */
int get_num_of_nums(void);
double get_nums(int i);
void round_loop(int number_of_repetitions);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_of_nums;

	num_of_nums = get_num_of_nums();
	round_loop(num_of_nums);

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
 */
void round_loop(int number_of_repetitions)
{
	double n;
	int i;

	for (i = 1; i <= number_of_repetitions; i++)
	{
		n = get_nums(i);
		printf("%.1f\n", round(n));
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
