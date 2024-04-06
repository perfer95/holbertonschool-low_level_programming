#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: double pointer struct
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->next = *head;
		if (*head != NULL)
		{
			(*head)->prev = node;
		}
		*head = node;
	}

	return (node);
}
