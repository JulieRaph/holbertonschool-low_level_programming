#include "main.h"

/**
 * *_strdup - pointer to a newly allocated space in memory
 * @str: chaine de caractère en memoire allouée, return NULL if NULL
 * Return: to the duplicated string or NULL if no space in memory
*/

char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int k = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[k])
	{
		k++;
	}

	dup = malloc((sizeof(char) * k) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	while (i < k)
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';
	return (dup);
}
