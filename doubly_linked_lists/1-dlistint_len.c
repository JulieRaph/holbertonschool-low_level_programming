#include "lists.h"

/**
 * dlistint_len - print only the number of elements in a linked list
 * @h: pointer element head
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
