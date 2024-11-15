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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		for (i = 0 ; i < (nmemb * size) ; i++)
			ptr[i] = 0;
		return (ptr);
	}
	else
		return (NULL);
}
