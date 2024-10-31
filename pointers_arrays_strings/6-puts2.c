#include "main.h"

/**
 * puts2 - function print every other character
 * @str: parametre pointeur
 * Return: void (nothing)
*/

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
