#include "main.h"

/**
 * times_table - accessory function
 *
 * Description: Prints the tines table from 0 to 9
 *
 * Return: Always void (success)
 */

void times_table(void)
{
	int i,
	    j,
	    result,
	    tens,
	    output;

	for (i = 0; i <= 9; i++)
	{
		result = 0;
		for (j = 0; j <= 9; j++)
		{
			tens = result / 10;
			if (tens > 0)
			{
				putchar(tens + '0');
			} else if (j > 0)
			{
				putchar(' ');
			};
			output = result % 10;
			putchar(output + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			};
			result = result + i;
		};
		putchar('\n');
	};
}
