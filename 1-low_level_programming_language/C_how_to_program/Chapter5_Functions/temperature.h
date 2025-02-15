#ifndef TEMPERATURE_H
#define TEMPERATURE_H

/**
 * toCelsius - Converts Fahrenheit to Celsius.
 * @fahrenheit: Temperature in Fahrenheit.
 *
 * Return: Equivalent temperature in Celsius.
 */
int toCelsius(int fahrenheit);

/**
 * toFahrenheit - Converts Celsius to Fahrenheit.
 * @celsius: Temperature in Celsius.
 *
 * Return: Equivalent temperature in Fahrenheit.
 */
int toFahrenheit(int celsius);

/**
 * printTemperatureTables - Prints conversion tables for Celsius and Fahrenheit.
 *
 * Description: This function prints two tables side by side:
 * one converting Celsius (0-100) to Fahrenheit and the other
 * converting Fahrenheit (32-212) to Celsius.
 */
void printTemperatureTables(void);

#endif /* TEMPERATURE_H */
