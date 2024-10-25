#include "main.h"

/**
 * print_last_digit - last digit of a number
 *
 * @n: last digit value
 *
 * Return: return the value of the last digit
 */

int print_last_digit(int n)
{
	int p;

	if (n < 0 && n != 0)
	{
		n = -n;
	}

	p = n % 10;

	if (p < 0 && p != 0)
	{
		p = -p;
	}
	_putchar('0' + p);
	return (p);
}
