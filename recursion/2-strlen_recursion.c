#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string with recursion
 * @s: parameter pointer string
 * Return: always 0 (Success)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
