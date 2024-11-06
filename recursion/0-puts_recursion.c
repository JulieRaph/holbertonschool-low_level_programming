#include "main.h"

/**
 * _puts_recursion - print a string with new line
 * @s: parameter pointer string
 * Return: void (nothing)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(s);
	_puts_recursion(++s);

}
