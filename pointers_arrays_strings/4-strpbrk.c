#include "main.h"

/**
 * *_strpbrk - function locate the first occurence in a string
 * @s: parameter pointer string
 * @accept: parameter pointer another string
 * Return: char s if match between s and accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return ('\0');
}
