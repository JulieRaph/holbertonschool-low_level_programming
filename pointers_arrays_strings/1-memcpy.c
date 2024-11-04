#include "main.h"

/**
 * *_memcpy - function to copy bytes between two pointers
 * @dest: parameter pointer
 * @src: parameter pointer
 * @n: unsigned int
 * Return: dest (with the copy)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

