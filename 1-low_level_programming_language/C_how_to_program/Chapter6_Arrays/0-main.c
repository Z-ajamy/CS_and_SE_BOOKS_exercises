#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user to enter the number of frequencies
 * and then generates a bar chart based on user input.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int x;

    printf("Please enter the number of frequencies: ");
    
    if (scanf("%d", &x) != 1 || x <= 0)  /* Input validation */
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return (1);
    }

    a_bar_chart(x);
    
    return (0);
}
