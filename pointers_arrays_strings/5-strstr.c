#include "main.h"

/**
 * *_strstr - function to locate ths substring inside a string
 * @haystack: parameter pointer of a string
 * @needle: parameter pointer of a substring
 * Return: needle character
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
