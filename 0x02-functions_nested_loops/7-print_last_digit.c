#include "main.h"

/**
 * print_last_digit - assccory function
 *
 * Description: returns the last digit in n
 *
 * @n: the input number
 *
 * Return: the last digit in n (success)
 */

int print_last_digit(int n)
{
	int output;

	if (n == INT_MIN)
	{
		output = -(n % 10);
		_putchar(output + '0');
	} else
	{
		output = abs(n) % 10;
		_putchar(output + '0');
	};

	return (output);
}
