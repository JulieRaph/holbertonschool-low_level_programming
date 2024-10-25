#include "main.h"

/**
 * times_table - function multiplication table
 *
 * @x, r, c: variable resultat, raw, column of the multiplication's table
 *
 * Return: void return (nothing)
 */

void times_table(void)
{
	int x, r, c;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			x = r * c;

			if (x <= 9)
				_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (x > 9)

				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
}
