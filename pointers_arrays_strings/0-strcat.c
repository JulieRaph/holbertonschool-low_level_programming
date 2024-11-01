#include "main.h"

/**
 * *_strcat - fonction to concatenates two strings
 * @dest: parametre pointer dest
 * @src: parametre pointer src
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0 ; dest[len] == '\0' ; len++)
	{
		for (len = 0 ; src[len] != '\0' ; len++)

		*dest++ = *src++;
		dest[len] = '\0';
	}

	return (dest);
}
