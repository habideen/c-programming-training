#include <stdio.h>

/**
 * main - Fahrenheit to Celcius calculator
 *
 * Return: 0 on success
 */
int main(void)
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;	/* Lower limit of temperature */
	upper = 300;	/* Upper limit  */
	step = 20;	/* step size  */

	printf("%7s%15s\n", "Celsius", "Fahrenheit");

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5.0 / 9.0 * (fahr - 32);
		printf("%7.0f\t%14.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return (0);
}
