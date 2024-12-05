#include "lists.h"

/**
 * get_dnodeint_at_index - function to return the nth node of a list
 * @head: pointer elements
 * @index: index starting from 0
 * Return: the nth node or NULL if doesnt exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (x == index)
		{
			return (current);
		}
		current = current->next;
		x++;
	}
	return (NULL);
}
