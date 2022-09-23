#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times straight line should be printed
 * Return: void (success)
 */

void print_diagonal(int n)
{
	int i,
	    j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		};
		_putchar('\\');
		_putchar('\n');
	};
	if (n <= 0)
	{
		_putchar('\n');
	};
}
