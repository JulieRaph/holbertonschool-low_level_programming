#include "lists.h"

/**
 * free_list - fonction to free the list_t
 * @head: pointer to the beginning or to the end of list
 * Return: void (nothing)
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
