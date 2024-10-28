#include "main.h"

/**
 * print_line - draws a line
 * @n: parameter
 * a: int
 * Return: void (nothing)
 */

void print_line(int n)
{
	int a;

	a = 0;

	if  (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
