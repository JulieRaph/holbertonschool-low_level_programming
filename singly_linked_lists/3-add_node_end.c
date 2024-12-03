#include "lists.h"

/**
 * create_node - create a new node
 * @value: value from pointer
 * Return: new node
*/

list_t *create_node(const char *value)
{
	int i = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		exit(98);
	}

	while (value[i])
		i++;

	new_node->str = strdup(value);
	new_node->len = i;

	if (new_node->str == NULL)
	{
		free(new_node);
		exit(98);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - add a node at the end of a linked list
 * @head: pointer head in new node
 * @str: string to add a node and to duplicate
 * Return: address of the new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = create_node(str);
	list_t *temp;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
