#include "main.h"

/**
 * more_numbers - print 10 times numbers
 *
 * Return: void (nothing)
 */

void more_numbers(void)
{
	int x, y, a;

	for (x = 0 ; x <= 9 ; x++)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
			{
				a = y % 10;
				_putchar((y / 10) + '0');
			}
			else
			{
				a = y;
			}
			_putchar(a + '0');
			y++;
		}

		_putchar('\n');
	}
}
