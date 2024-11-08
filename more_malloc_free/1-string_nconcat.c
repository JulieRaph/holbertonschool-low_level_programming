#include "main.h"

/**
 * *string_nconcat - concatenate 2 strings with restrictions
 * @s1: pointer array first string
 * @s2: pointer array second string
 * @n: bytes of memory space allocated
 * Return: to a pointer of s3
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n;
	unsigned int size1, size2;
	char *ptr;
	unsigned int sum1, sum2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (size1 = 0 ; s1[size1] != '\0' ; size1++)

	for (size2 = 0 ; s2[size2] != '\0' ; size2++)

	if (n < size2)
	{
		ptr = malloc(sizeof(char) * (size1 + n + 1));
	}
	else
		ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (sum1 = 0 ; sum1 < size1 ; sum1++)
	{
		ptr[sum1] = s1[sum1];
	}

	for (sum2 = 0 ; sum2 < len ; sum2++)
	{
		ptr[sum1++] = s2[sum2];
	}

	ptr[sum1++] = '\0';

	return (ptr);
}
