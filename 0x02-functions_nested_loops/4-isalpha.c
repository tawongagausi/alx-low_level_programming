#include "main.h"

/**
 * _isalpha - assccory function
 *
 * Description: returns a value for if c is a number or letter
 *
 * @c: the undecided character type
 *
 * Return: 0 or 1 (success)
 */

int _isalpha(int c)
{
	int decider,
	    output;

	decider = isalpha(c);
	if (decider > 0)
	{
		output = 1;
	} else
	{
		output = 0;
	};

	return (output);
}
