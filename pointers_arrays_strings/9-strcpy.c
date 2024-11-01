#include "main.h"

/**
 * *_strcpy - fonction copy string
 * @dest: parametre pointer
 * @src: parametre pointer
 * Return: char (value)
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
