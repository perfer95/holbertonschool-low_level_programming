#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: double pointer double link list to check
 * @index: integer with the position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxi = *head;

	if (head == NULL)
		return (-1);
	if (head != NULL)
	{
		while ((index != 0) && (auxi != NULL))
		{
			auxi = auxi->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && auxi)
		{
			if (auxi->next == NULL)
				auxi->next->prev = auxi->prev;
			if (auxi->prev == NULL)
				auxi->prev->next = auxi->next;
			else
				*head = auxi->next;

			free(auxi);

			return (1);
		}
	}
	return (-1);
}
