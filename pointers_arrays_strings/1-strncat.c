#include "main.h"

/**
 * *_strncat - concatenate two strings more
 * @dest: parameter pointer destination
 * @src: parametre pointer source
 * @n: integer
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;

	}

	while (*src != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;

	}
	*ptr = '\0';

	return (dest);
}
