#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to print
 * @f: f to print
 * Return: void (nothing)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
