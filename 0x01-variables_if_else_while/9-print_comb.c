#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints all numbers seperated by commas
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');

	return (0);
}
