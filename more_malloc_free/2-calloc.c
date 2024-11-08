#include "main.h"

/**
 * *_calloc - allocate memory for an array and use malloc
 * @nmemb: integer adress of memory array
 * @size: integer size of an array
 * Return: void (nothing)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	int len;

	len = nmemb * size;

	ptr = (char *)malloc(len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
