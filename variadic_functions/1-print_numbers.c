#include "variadic_functions.h"

/**
 * print_numbers - to print numbers, followed by a new line
 * @separator: string to be printed between numb
 * @n: numbers of int passed to the func
 * Return: void (nothing)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list jlist;

	va_start(jlist, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = (int) va_arg(jlist, int);
		printf("%d", sum);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(jlist);

	printf("\n");
}
