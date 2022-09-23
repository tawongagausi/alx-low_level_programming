#include "main.h"

/**
 * _isdigit - returns a value for if c is a number
 * @c: the undecided letter type
 * Return: 0 or 1 (success)
 */

int _isdigit(int c)
{
	int output;

	if (isdigit(c))
	{
		output = 1;
	} else
	{
		output = 0;
	};

	return (output);
}
