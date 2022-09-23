#include "main.h"

/**
 * print_most_numbers - prints all numbers from 0 till 9 except 2 and 4
 * Return: void (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		};
		putchar(i);
	};
	putchar('\n');
}
