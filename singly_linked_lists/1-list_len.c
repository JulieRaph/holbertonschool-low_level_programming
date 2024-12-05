#include "lists.h"

/**
 * list_len - function to return numbers of elements linked list
 * @h: element head
 * Return: numbers of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	if (current == NULL)
		return (0);

	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
