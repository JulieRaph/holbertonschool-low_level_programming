#include "main.h"

/**
 * *_strchr - function which locate a character in a string
 * @s: parameter pointer
 * @c: character
 * Return: char (pointer)
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
