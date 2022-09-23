#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: integer to print
 * Return: always 0 (success)
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		/* A recurssion to always print the non-last numbers*/
		print_number(num / 10);
	};
	_putchar((num % 10) + 48);
}
