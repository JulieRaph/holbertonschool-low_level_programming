#include "main.h"

/**
 * *leet - function to change letters by digit
 * @d: parameter pointer
 * Return: char
 */

char *leet(char *d)
{
	int let;
	int dig;
	char *i = "aAeEoOtTlL";
	char *j = "4433007711";


	for (let = 0 ; d[let] != '\0' ; let++)
	{
		for (dig = 0 ; dig < 11 ; dig++)
		{
			if (d[let] == i[dig])
			{
				d[let] = j[dig];
			}
		}
	}
	return (d);
}
