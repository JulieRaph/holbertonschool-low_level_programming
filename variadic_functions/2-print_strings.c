#include "variadic_functions.h"

/**
 * print_strings - that prints strings with va
 * @separator: is the string to be printed between the strings
 * @n: number of strings passed to the func
 * Return: void (nothing)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list jlist;

	va_start(jlist, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(jlist, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);
	}
	va_end(jlist);

	printf("\n");
}
