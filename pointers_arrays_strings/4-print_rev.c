#include "main.h"

/**
 * print_rev - print string reverse
 * @s: pointer string
 * Return: void (nothing)
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len != 0)
		_putchar(s[--len]);

	_putchar('\n');
}
