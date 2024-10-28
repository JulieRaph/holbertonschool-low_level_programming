#include "main.h"

/**
 * print_line - draws a line
 * @n: parameter
 * a: int
 * Return: void (nothing)
 */

void print_line(int n)
{

	if  (n <= 3 && n <= 10 && n <= 98)

		_putchar('_');
	_putchar('\n');
	{

		for (n = 0 ; n <= 3 ; n++)
		{
			_putchar('_');
		}
		_putchar('\n');

		for (n = 0 ; n <= 10 ; n++)
		{
			_putchar('_');
		}
		_putchar('\n');

		for (n = 0 ; n <= 98 ; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
