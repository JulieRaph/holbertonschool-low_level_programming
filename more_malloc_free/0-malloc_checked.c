#include "main.h"

/**
 * *malloc_checked - function checked if space memory suffisant
 * @b: bytes of memory to malloc
 * Return: void (nothing)
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
