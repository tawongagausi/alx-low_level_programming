#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to be reversed
 * Return: Always void (success)
 */

void rev_string(char *s)
{
	int len = strlen(s),
	    i;
	/* Limit of an array */
	char mirror[1000];

	for (i = 0; i < len; i++)
	{
		mirror[i] = s[i];
	};
	for (i = (len - 1); i >= 0; i--)
	{
		s[(len - 1) - i] = mirror[i];
	};
}
