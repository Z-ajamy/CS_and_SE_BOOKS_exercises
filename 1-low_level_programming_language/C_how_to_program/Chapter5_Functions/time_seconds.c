#include "time_seconds.h"

/**
 * timeInSeconds - Converts a given time into seconds since last 12:00.
 * @hours: The hour component (1 to 12).
 * @minutes: The minute component (0 to 59).
 * @seconds: The second component (0 to 59).
 *
 * Description: The function assumes a 12-hour clock format.
 * If the given time is 12:00:00, the function returns 0.
 *
 * Return: The total number of seconds elapsed since the last 12:00.
 */
int timeInSeconds(int hours, int minutes, int seconds)
{
    if (hours == 12)
        hours = 0; /* Treat 12 as 0 for easier calculations */

    return (hours * 3600) + (minutes * 60) + seconds;
}
