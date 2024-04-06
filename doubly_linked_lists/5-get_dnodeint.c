#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: pointer double link list to check
 * @index: integer with th position
 * Return: the node asked
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while ((index != 0) && (head != NULL))
	{
		head = head->next;
		index--;
	}

	if ((index == 0) && (head != NULL))
	{
		return (head);
	}

	return (NULL);
}
