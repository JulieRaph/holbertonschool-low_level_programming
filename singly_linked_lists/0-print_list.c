#include "lists.h"

/**
 * print_list - function to print all elements of a list
 * @h: element head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{

		printf("[%d] %s\n", current->len, current->str);
		}
		i++;

		current = current->next;
	}

	return (i);
}
