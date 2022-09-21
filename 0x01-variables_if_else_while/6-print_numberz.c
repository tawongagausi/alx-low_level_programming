#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints all numbers of base10 wuth putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	};
	putchar('\n');

	return (0);
}
