#include "main.h"

int count(int);

/**
 * print_to_98 - accessory function
 *
 * Description: prints every number from n to 98
 *
 * @n: The nuber to start from on the count to 98
 *
 * Return: Always void (success)
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			count(i);
		};
	} else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			count(i);
		};
	};
	count(98);
	putchar('\n');
}

/**
 * count - secondary function
 *
 * Description: prints out each number on the count to 98
 *
 * @i: the number to be printed
 *
 * Return: always 0 (success)
 */

int count(int i)
{
	int hunds,
	    tens,
	    output;

	if (i < 0)
	{
		putchar('-');
	};
	tens = abs(i) / 10;
	if (tens > 0)
	{
		hunds = tens / 10;
		if (hunds > 0)
		{
			putchar(hunds + '0');
		};
		tens = tens % 10;
		putchar(tens + '0');
	};
	output = abs(i) % 10;
	putchar(output + '0');
	if (i < 98 || i > 98)
	{
		putchar(',');
		putchar(' ');
	};

	return (0);
}

