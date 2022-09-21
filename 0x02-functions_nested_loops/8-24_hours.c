#include "main.h"

/**
 * jack_bauer - accessory function
 *
 * Description: Prints every minute of the day in Jack Bauer Format
 *
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int i = 0,
	    j = 0,
	    h1,
	    h2,
	    m1,
	    m2;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			h1 = i / 10 + '0';
			h2 = i % 10 + '0';
			m1 = j / 10 + '0';
			m2 = j % 10 + '0';
			putchar(h1);
			putchar(h2);
			putchar(':');
			putchar(m1);
			putchar(m2);
			putchar('\n');

			j++;
		}

		i++;
	};
}
