#include <stdio.h>

/**
 * main - A funtion that prints the highest prime factor of 612852475143
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long i = 612852475143;
	unsigned long divisor = 2;

	while (divisor < i)
	{
		if (i % divisor == 0)
		{
			i /= divisor;
			divisor = 2;
		} else
		{
			divisor++;
		};
	};

	printf("%lu\n", i);

	return (0);
}
