#include "main.h"

/**
 * print_alphabet_x10 - function print_alphabet_x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 1;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
