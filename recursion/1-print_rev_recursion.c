#include "main.h"

/**
 * _print_rev_recursion - print reverse character
 * @s: parameter pointer recursion
 * Return: void (nothing)
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
