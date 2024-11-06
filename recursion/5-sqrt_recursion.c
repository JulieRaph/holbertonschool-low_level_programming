#include "main.h"

/**
 * square - calculate the square of a n number
 * @num: num = n
 * @root: the number + 1 until root * root = n
 * Return: root
*/

int square(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (square(num, root + 1));
	}
}

/**
 * _sqrt_recursion - go into the square to calc only if n > 0
 * @n: the number you want to know the square root
 * Return: -1 if n < 0 else goes inside square
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}
