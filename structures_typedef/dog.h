#ifndef dog_h
#define dog_h

/**
 * struct dog - struct to the dog
 * @name: name of the dog
 * @age: age of the dog number float
 * @owner: name of the owner
 * Return: always 0 (Success)
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

/* Prototypes fonction inside */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
