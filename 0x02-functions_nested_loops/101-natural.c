#include "main.h"

/**
 * main - entry point
 *
 * Description: A program that prints all numbers below 1024
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i,
	    sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
