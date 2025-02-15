#ifndef TIME_SECONDS_H
#define TIME_SECONDS_H

/**
 * timeInSeconds - Converts hours, minutes, and seconds into total seconds
 *                since the last time the clock struck 12.
 * @hours: The hour component (1 to 12).
 * @minutes: The minute component (0 to 59).
 * @seconds: The second component (0 to 59).
 *
 * Return: The total number of seconds since the last 12:00.
 */
int timeInSeconds(int hours, int minutes, int seconds);

#endif /* TIME_SECONDS_H */
