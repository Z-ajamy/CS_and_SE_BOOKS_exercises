#include <stdio.h>
#include "time_seconds.h"

/**
 * main - Entry point of the program.
 *
 * Description: Prompts the user for two times (in hours, minutes, and seconds),
 * and calculates the difference in seconds between them.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int h1, m1, s1, h2, m2, s2;
    int time1, time2, difference;

    /* Get first time */
    printf("Enter first time (hh mm ss): ");
    if (scanf("%d %d %d", &h1, &m1, &s1) != 3 || h1 < 1 || h1 > 12 || 
        m1 < 0 || m1 > 59 || s1 < 0 || s1 > 59)
    {
        printf("Invalid input. Please enter values within 12-hour format.\n");
        return (1);
    }

    /* Get second time */
    printf("Enter second time (hh mm ss): ");
    if (scanf("%d %d %d", &h2, &m2, &s2) != 3 || h2 < 1 || h2 > 12 || 
        m2 < 0 || m2 > 59 || s2 < 0 || s2 > 59)
    {
        printf("Invalid input. Please enter values within 12-hour format.\n");
        return (1);
    }

    /* Convert both times to seconds */
    time1 = timeInSeconds(h1, m1, s1);
    time2 = timeInSeconds(h2, m2, s2);

    /* Compute the absolute difference */
    difference = time1 - time2;
    if (difference < 0)
        difference = -difference;

    /* Display result */
    printf("Time difference in seconds: %d\n", difference);

    return (0);
}
