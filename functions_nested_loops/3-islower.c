#include "main.h"

/**
 * _islower - main character lower
 *
 * @c: paramètre de la fonction
 *
 * Return: 1 if a lowercase and 0 if an otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
