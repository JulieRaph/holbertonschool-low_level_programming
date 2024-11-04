#include "main.h"

/**
 * *_memset - function to fill memory with a constant byte
 * @s: parameter pointer
 * @b: constant char
 * @n: unsigned int n octets - size of the memory to print
 * Return: char pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
