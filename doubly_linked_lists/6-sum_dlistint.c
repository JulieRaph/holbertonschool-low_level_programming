#include "lists.h"

/**
 * sum_dlistint - the sum of all the data n of a list
 * @head: pointer elements 0 in the beginning
 * Return: the sum or 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
