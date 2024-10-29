#include "main.h"

/**
 * print_line - draws a line
 * @n: parameter
 * a: int
 * Return: void (nothing)
 */

void print_line(int n)
{
	int i = 0;

		for (i = 1 ; i <= n ; i++)
		{
			if (n <= 0)
				_putchar('\n');

			_putchar(95);
		}
		_putchar('\n');
}
