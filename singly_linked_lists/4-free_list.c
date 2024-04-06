#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: struct type list_s to free
 * Return: empty
 */
void free_list(list_t *head)
{
	list_t *auxi;

	while (head != NULL)
	{
		auxi = head->next;
		free(head->str);
		free(head);
		head = auxi;
	}
}
