#include "main.h"

/**
 * puts2 - A function that prints a every other character of a string
 * @str: The string to be printed
 * Return: Always void (success)
 */

void puts2(char *str)
{
	int len,
	    i;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	};
	_putchar('\n');
}
