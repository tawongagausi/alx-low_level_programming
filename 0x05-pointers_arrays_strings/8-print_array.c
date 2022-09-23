#include "main.h"

/**
 * print_array - A function that prints a number of characters from an array
 * @a: The array to be printed from
 * @n: The number of characters to be printed form the array
 * Return: Always void (success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	};
	printf("\n");
}
