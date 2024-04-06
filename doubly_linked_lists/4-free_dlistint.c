#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pinter double link list to free
 * Return: empty
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *auxi = head;

	while (head != NULL)
	{
		head = head->next;
		free(auxi);
		auxi = head;
	}
}
