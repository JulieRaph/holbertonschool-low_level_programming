#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer string
 * Return: void (nothing)
 */

void rev_string(char *s)
{
	char tmp;
	int end = 0;
	int start = 0;

	while (s[end] != 0)
	{
		end++;
	}
	end--;

	while (start < (end / 2))
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		--end;
	}
}
