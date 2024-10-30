#include "main.h"

/**
 * _strlen - fonction
 * @s: strlen fonction longueur chaines de caractère
 * Return: always 0 (Success)
*/

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
