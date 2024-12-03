#include "lists.h"

/**
 * print_dlistint - print all the elements of a list
 * @h: element head
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
