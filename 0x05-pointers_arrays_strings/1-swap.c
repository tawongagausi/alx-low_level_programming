#include "main.h"

/**
 * swap_int - A function that swaps the value of the two parameters
 * @a: The address of the first value
 * @b: The address of the second value
 * Return: Always void (success)
 */

void swap_int(int *a, int *b)
{
	int accm;

	accm = *b;
	*b = *a;
	*a = accm;
}
