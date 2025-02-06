#include <stdio.h>
/**
 * main - Reads two integers and calculates their sum,
 * product, difference, quotient, and remainder.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, resAdd, resSub, resMul, resDiv, resMod;

	printf("%s\n", "Enter your first integer");
	scanf("%d", &x);

	printf("%s\n", "Enter your second integer");
	scanf("%d", &y);

	resAdd = x + y;
	printf("Sum: %d\n", resAdd);
	resSub = x - y;
	printf("Sub: %d\n", resSub);
	resMul = x * y;
	printf("Mul: %d\n", resMul);

	if (y == 0)
	{
		printf("%s\n", "Can nod div by Zero");
		printf("%s\n", "Can nod mod by Zero");
		return (0);
	}
	else
	{
			resDiv = x / y;
			printf("Div: %d\n", resDiv);
			resMod = x % y;
			printf("Mod: %d\n", resMod);
	}
	return (0);
}
