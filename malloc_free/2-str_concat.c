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
	unsigned int i;
	unsigned int j = 0;
	unsigned int l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] || s2[i] ; i++)
		l++;

	s3 = malloc(sizeof(char) * l);

	if (s3 == NULL)
		return (NULL);

	for (i = 0 ; s1[i] ; i++)
		s3[j++] = s1[i];

	for (i = 0 ; s2[i] ; i++)
		s3[j++] = s2[i];

	return (s3);
}
