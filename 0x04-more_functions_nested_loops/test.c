#include "stdio.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times straight line should be printed
 * Return: void (success)
 */

int main(void)
{
	int i,
	    j,
	    n = 5;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		};
		putchar('\\');
		putchar('\n');
	};
	if (n <= 0)
	{
		putchar('\n');
	};

	return (0);
}
