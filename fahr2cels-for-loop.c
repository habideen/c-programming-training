#include <stdio.h>

/**
 * main - Fahrenheit to celsius using for loop
 *
 * Return: 0 if successful
 */
int main(void)
{
	printf("%7s%13s\n", "Celsius", "Fahrenheit");
	for (int fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%7d %12.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return (0);
}
