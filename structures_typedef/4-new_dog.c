#include "main.h"
#include "dog.h"

/**
 * _strlen - lenght of the string
 * @s: string
 * Return: lenght
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copy the string pointer by src
 * @dest: pointer parameter
 * @src: parameter pointer
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL or pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size1, size2;

	size1 = _strlen(name);
	size2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (size1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (size2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
