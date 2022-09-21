#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints the alphabets in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	};
	putchar('\n');

	return (0);
}
