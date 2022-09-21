#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints alphabets using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	};
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	};
	putchar('\n');

	return (0);
}
