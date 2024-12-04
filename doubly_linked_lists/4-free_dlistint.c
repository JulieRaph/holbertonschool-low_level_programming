#include "lists.h"

/**
 * free_dlistint - free the doubly linked list
 * @head: pointer elements
 * Return: void (nothing)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
