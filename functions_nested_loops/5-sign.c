#include "main.h"

/**
 * print_sign - main print sign of a number
 *
 * @n: parametre de la fontion
 *
 * Return: 1 if n is greater than zero 0 if zero -1 if less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
