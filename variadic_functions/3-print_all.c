#include "variadic_functions.h"

/**
 * print_all - function to print all
 * @format: parameter constant
 * @char*: parameter constant
 * Return: void (nothing)
 */

void print_all(const char * const format, ...)
{
	va_list jlist;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(jlist, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(jlist, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(jlist, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(jlist, double));
				break;
			case 's':
				str = va_arg(jlist, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(jlist);
}
