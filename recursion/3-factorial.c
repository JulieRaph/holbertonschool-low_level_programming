#include "main.h"

/**
 * factorial - function to factorial a number
 * @n: integer n is lower than zero
 * Return: always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
