#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times straight line should be printed
 * Return: void (success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	};
	putchar('\n');
}
