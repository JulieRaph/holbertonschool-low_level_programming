#include "main.h"

/**
 * print_square - multiple square with new line
 * @size: size of the square
 * Return: void (nothing)
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
