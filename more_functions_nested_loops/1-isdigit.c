#include "main.h"

/**
 * _isdigit - check digit
 * @c: digit int
 * Return: digit or otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
