#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: struct
 * @str: string to add
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node, *ptr;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (str != NULL)
	{
		node->str = strdup(str);
		while (str[count] != '\0')
			i++;
		node->len = i;
	}
	else
	{
		node->str = NULL;
		node->len = 0;
	}

	node->next = NULL;

	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
	else
		*head = node;
	return (node);
}
