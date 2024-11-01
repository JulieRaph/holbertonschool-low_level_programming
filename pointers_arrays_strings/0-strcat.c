#include "main.h"

/**
 * *_strcat - fonction to concatenates two strings
 * @dest: parametre pointer dest
 * @src: parametre pointer src
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	char *len = dest;

	while (*len != '\0')
	{
		len++;
	}

	while (*src != '\0')
	{
		*len++ = *src++;
	}

	*len = '\0';

	return (dest);
}
