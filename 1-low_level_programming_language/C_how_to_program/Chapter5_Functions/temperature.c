#include <stdio.h>
#include "temperature.h"

/**
 * toCelsius - Converts Fahrenheit to Celsius.
 * @fahrenheit: Temperature in Fahrenheit.
 *
 * Description: Uses the formula C = (F - 32) * 5 / 9
 *
 * Return: The equivalent temperature in Celsius.
 */
int toCelsius(int fahrenheit)
{
    return ((fahrenheit - 32) * 5 / 9);
}

/**
 * toFahrenheit - Converts Celsius to Fahrenheit.
 * @celsius: Temperature in Celsius.
 *
 * Description: Uses the formula F = (C * 9 / 5) + 32
 *
 * Return: The equivalent temperature in Fahrenheit.
 */
int toFahrenheit(int celsius)
{
    return ((celsius * 9 / 5) + 32);
}

/**
 * printTemperatureTables - Prints conversion tables for Celsius and Fahrenheit.
 *
 * Description: This function displays two tables side by side:
 * one for Celsius to Fahrenheit (0-100 degrees Celsius)
 * and one for Fahrenheit to Celsius (32-212 degrees Fahrenheit).
 */
void printTemperatureTables(void)
{
    int celsius, fahrenheit;

    printf("Celsius to Fahrenheit   |     Fahrenheit to Celsius\n");
    printf("----------------------- | -------------------------\n");

    for (celsius = 0, fahrenheit = 32; celsius <= 100 && fahrenheit <= 212;
         celsius++, fahrenheit++)
    {
        printf(" %3d°C  = %3d°F         |     %3d°F  = %3d°C\n",
               celsius, toFahrenheit(celsius), fahrenheit, toCelsius(fahrenheit));
    }
}
