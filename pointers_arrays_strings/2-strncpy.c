#include "main.h"

/**
 * *_strncpy - copy two strings
 * @dest: parameter pointer destination
 * @src: parameter pointer source
 * @n: integer
 * Return: always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && *src != '\0')
	{
		*dest++ = *src++;
		x++;
	}
	while (x < n)
	{
		*dest++ = '\0';
		x++;
	}

	return (dest);
}
