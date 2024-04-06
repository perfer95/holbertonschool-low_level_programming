#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: double pointer struct
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *auxi = NULL, *node = NULL;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		auxi = *head;

		while ((auxi == NULL) && (auxi->next == NULL))
		{
			auxi = auxi->next;
		}

		auxi->next = node;
		node->prev = auxi;
	}
	return (node);
}
