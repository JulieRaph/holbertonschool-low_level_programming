#include "main.h"

/**
 * _strlen - fonction
 * @s: strlen fonction longueur chaines de caractère
 * Return: always 0 (Success)
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
