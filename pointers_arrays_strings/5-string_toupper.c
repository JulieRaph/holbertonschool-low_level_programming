#include "main.h"

/**
 * *string_toupper - fonction to change lowercase to uppercase
 * @ch: parameter pointer
 * Return: char (uppercase)
*/

char *string_toupper(char *ch)
{
	int len;

	for (len = 0 ; ch[len] != '\0' ; len++)
	{
		if (ch[len] >= 97 && ch[len] <= 122)
		{
			ch[len] = ch[len] - 32;
		}
	}
	return (ch);
}
