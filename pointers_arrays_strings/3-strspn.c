#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter pointer to return number od bytes
 * @accept: parameter pointer only bytes for s
 * Return: s number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0 ; s[i] != '\0' && s[i] != 32 ; i++)
	{

		for (j = 0 ; accept[j] != '\0' ; j++)
		{

			if (accept[j] == s[i])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
