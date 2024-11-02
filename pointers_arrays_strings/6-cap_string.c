#include "main.h"

/**
 * *cap_string - function to capitaizes all words of string
 * @cap: parameter pointer
 * Return: char
 */

char *cap_string(char *cap)
{
	int len = 0;

	while (cap[len] != '\0')
	{
		if (len == 0 || cap[len - 1] == ' ')
		{
			if (cap[len] >= 97 && cap[len] <= 122)
			{
				cap[len] -= 32;
			}
		}
		len++;
	}
	return (cap);
}
