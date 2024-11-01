#include "main.h"

/**
 * *_strcpy - fonction copy string
 * @dest: parametre pointer
 * @src: parametre pointer
 * Return: char (value)
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0 ; src[len] != '\0' ; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';

	return (dest);
}
