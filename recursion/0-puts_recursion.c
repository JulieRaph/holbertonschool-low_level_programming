#include "main.h"

/**
 * _puts_recursion - print a string with new line
 * @s: parameter pointer string
 * Return: void (nothing)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
