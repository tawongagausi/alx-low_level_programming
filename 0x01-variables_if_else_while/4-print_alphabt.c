#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that skips a loop
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		};
		putchar(a);
	};
	putchar('\n');

	return (0);
}
