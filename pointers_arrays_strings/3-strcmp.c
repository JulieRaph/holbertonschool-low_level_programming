#include "main.h"

/**
 * _strcmp - to compare two strings
 * @s1: parameter pointer first string
 * @s2: parameter pointer second string
 * Return: always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int s = 0;

	while (s1[s] != '\0' || s2[s] != '\0')
	{
		s1[s]++;
		s2[s]++;

		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
	}
	return (0);
}
