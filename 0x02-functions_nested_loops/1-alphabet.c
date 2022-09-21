#include "main.h"

/**
 * print_alphabet - assecory function
 *
 * Description: Program printing letters
 *
 * Return: always void (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	};
	putchar('\n');
}
