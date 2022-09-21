#include "main.h"

void show(int);

/**
 * print_times_table - accessory function
 *
 * Description: Prints the times table from 0 to n
 *
 * @n: The limit of the times table
 *
 * Return: Always void (success)
 */

void print_times_table(int n)
{
	int i,
	    j,
	    result;

	for (i = 0; i <= n; i++)
	{
		if (n > 15)
		{
			break;
		};
		putchar('0');
		result = i;
		if (n != 0)
		{
			putchar(',');
		};
		for (j = 1; j <= n; j++)
		{
			show(result);
			if (j < n)
			{
				putchar(',');
			};
			result = result + i;
		};

		putchar('\n');
	};
}

/**
 * show - Helper function
 *
 * Description: Prints the result in a tabular form
 *
 * @result: The number to be printed
 *
 * Return: always void (success)
 */

void show(int result)
{
	int hunds,
	    tens;

	putchar(' ');
	tens = result / 10;
	if (tens > 0)
	{
		hunds = tens / 10;
		if (hunds > 0)
		{
			putchar(hunds + '0');
		} else
		{
			putchar(' ');
		};
		putchar(tens % 10 + '0');
	} else
	{
		putchar(' ');
		putchar(' ');
	};
	putchar(result % 10 + '0');
}
