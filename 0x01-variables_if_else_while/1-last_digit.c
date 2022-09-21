#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints a random number
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and %s\n",
n, last_digit, "is greater than 5");
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and %s\n",
n, last_digit, "is 0");
	} else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and %s\n",
n, last_digit, "is less than 6 and not 0");
	};

	return (0);
}