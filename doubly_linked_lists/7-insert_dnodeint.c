#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @h: double pointer
 * @idx: index of the list where the new node should be added
 * @n: number to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{0
	dlistint_t *node, *auxi;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	auxi = *h;

	while ((idx > 1) && (auxi != NULL) && (auxi->next != NULL))
	{
		auxi = auxi->next;
		idx--;
	}

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	if (idx > 1 || auxi == NULL)
		return (NULL);

	node->n = n;

	if (auxi->next != NULL)
		auxi->next->prev = node;
	node->prev = auxi;
	node->next = auxi->next;
	auxi->next = node;

	return (node);
}
