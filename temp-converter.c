#include <stdio.h>

/**
 * main - Fahrenheit to Celcius calculator
 *
 * Return: 0 on success
 */
int main(void)
{
	int celsius, fahr;
	int lower, upper, step;

	lower = 0;	/* Lower limit of temperature */
	upper = 300;	/* Upper limit  */
	step = 20;	/* step size  */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

	return (0);
}
