#include "stdio.h"

/**
 * main - entry point
 *
 * Description: A program that prints the sum of even number (excluded)
 * till 4000000 in the fibonacci sequence
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long result = 0,
		      sum,
		      fib1 = 0,
		      fib2 = 1;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum <= 4000000 && sum % 2 == 0)
		{
			result += sum;
		} else if (sum > 4000000)
		{
			break;
		};
		fib1 = fib2;
		fib2 = sum;
	};
	printf("%lu\n", result);

	return (0);
}
