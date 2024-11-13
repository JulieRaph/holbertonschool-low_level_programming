#include "main.h"

/**
 * init_dog - init struct dog
 * @d: name of the struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: void (nothing)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
