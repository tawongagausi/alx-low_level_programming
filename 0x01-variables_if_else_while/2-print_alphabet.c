#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Printing letters of the english alphabet using putchar
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
	putchar('\n');

	return (0);
}
