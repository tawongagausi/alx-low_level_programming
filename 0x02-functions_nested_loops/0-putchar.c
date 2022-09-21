#include "main.h"

/**
 * main - entry point
 *
 * Description: A program that prints "_putchar"
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char output[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(output[i]);
	};
	putchar('\n');

	return (0);
}
