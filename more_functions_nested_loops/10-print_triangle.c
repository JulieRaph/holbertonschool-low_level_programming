#include "main.h"

/**
 * print_triangle - fonction triangle
 * @size: size of the square
 * Return: void (nothing)
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = i ; j < size ; j++)
				_putchar(' ');

			for (j = 1; j <= i ; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
