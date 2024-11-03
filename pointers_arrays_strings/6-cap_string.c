#include "main.h"

/**
 * *cap_string - function to capitaizes all words of string
 * @cap: parameter pointer
 * Return: char
 */

char *cap_string(char *cap)
{
	int len = 0;
	int s;
	char separate[13] = " \t\n,;.!?\"(){}";

	while (cap[len] != '\0')
	{
		if (len == 0 && cap[len] >= 'a' && cap[len] <= 'z')
			cap[len] -= 32;
		{
			for (s = 0 ; s < 13 ; s++)
			{
				if (cap[len] == separate[s])
				{
					if (cap[len + 1] >= 'a' && cap[len + 1] <= 'z')
						cap[len + 1] -= 32;
				}
			}
		}
		len++;
	}
	return (cap);
}
