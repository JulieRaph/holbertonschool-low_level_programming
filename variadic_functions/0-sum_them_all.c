#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all its parameters
 * @n: unsigned int
 * Return: sum or O if n NULL
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list jlist;

	if (n == 0)
		return (0);

	va_start(jlist, n);

	for (i = 0 ; i < n ; i++)
		sum += (int) va_arg(jlist, int);
	va_end(jlist);
	return (sum);
}

