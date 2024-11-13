#include "main.h"

/**
 * free_dog - free memory dog
 * @d: parameter pointer
 * Return: void (nothing)
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
