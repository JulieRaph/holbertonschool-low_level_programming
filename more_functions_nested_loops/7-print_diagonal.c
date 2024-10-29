#include "main.h"

/**
 * print_diagonal - print diagonal space
 * @n: int end of the line
 * i: int line vertical
 * j: int line horizontale
 * Return: void (nothing)
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	j = 0;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
