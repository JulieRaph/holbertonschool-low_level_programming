#include "main.h"

/**
 * *str_concat - to concatenate two string malloc
 * @s1: first string to concatenate with a space malloc
 * @s2: second string to concatenate with space malloc
 * Return: to a new allocated space char
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size1;
	unsigned int size2;

	for (size1 = 0; s1 && s1[size1]; size1++)

		for (size2 = 0; s2 && s2[size2]; size2++)

			s3 = malloc(sizeof(char) * (size1 + size2 + 1));

	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < size1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (size1 + size2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}

	s3[i] = '\0';

	return (s3);
}
