#include "main.h"

/**
 * _isalpha - function name to all alphabet
 *
 * @c: parametre fonction
 *
 * Return: 1 if a letter or 0 if an otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);
	else
		return (0);
}
