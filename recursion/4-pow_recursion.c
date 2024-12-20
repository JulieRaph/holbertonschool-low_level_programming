#include "main.h"

/**
 * _pow_recursion - function to return the value x raised to the power y
 * @x : integer recursion
 * @y: integer recursion
 * Return: always int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
