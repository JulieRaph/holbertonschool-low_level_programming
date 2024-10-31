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
	len--;

	if (len % 2 != 0)
	{
		n = (len + 1) / 2;

			for (; n <= len ; n++)
			{
				_putchar(str[n]);
			}
	}
	_putchar('\n');
}
