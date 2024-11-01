#include "main.h"

/**
 * *_strcat - fonction to concatenates two strings
 * @dest: parametre pointer dest
 * @src: parametre pointer src
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[i] == '\0')
	{
		while (src[len] != '\0')
		{
			len++;
		}

		*dest++ = *src++;
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
