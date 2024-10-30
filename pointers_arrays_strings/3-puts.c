#include "main.h"

/**
 * _puts - fonction to read without puts
 * @str: parametre pointer
 * i: integer
 * Return: void (nothing)
*/

void _puts(char *str)
{
	int s;

	for (s = 0 ; str[s] != '\0' ; str++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
