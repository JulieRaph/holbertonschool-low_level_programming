#include "main.h"

/**
 * puts_half - function print last half character of string
 * @str: parametre pointer
 * Return: void (nothing)
 */

void puts_half(char *str)
{
	int n = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2;

	if (len % 2 == 0)
	{
		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = n + 1;

		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
