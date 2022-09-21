#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints all hexadecimal characters
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
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	};
	putchar('\n');

	return (0);
}
