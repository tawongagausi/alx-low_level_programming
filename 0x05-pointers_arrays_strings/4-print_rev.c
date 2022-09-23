#include "main.h"

/**
 * print_rev - A function that prints a string iin reverse
 * @s: The string to be printed
 * Return: Always void (success)
 */

void print_rev(char *s)
{
	int len,
	    i;

	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	};
	_putchar('\n');
}
