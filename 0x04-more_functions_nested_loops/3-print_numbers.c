#include "main.h"

/**
 * print_numbers - prints all numbers from 0 till 9
 * Return: void (success)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	};
	putchar('\n');
}
