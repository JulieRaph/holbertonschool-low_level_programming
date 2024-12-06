#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a list
 * @head: pointer to pointer elements of a list
 * @index: index of the node which be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;

	if (current == NULL)
	{
		return (-1);
	}

	free(current);
	return (1);
}
