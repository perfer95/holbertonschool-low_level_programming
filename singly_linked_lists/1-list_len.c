#include "lists.h"

/**
 * list_len - function that count the number of elements in a
 * linked list_t list.
 * @h: struct type list_s called list_t
 * Return: size_t the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
