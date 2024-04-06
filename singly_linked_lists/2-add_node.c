#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: struct
 * @str: string to add
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *auxi;

	auxi = malloc(sizeof(list_t));

	if (auxi == NULL)
	{
		return (NULL);
	}

	auxi->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}

	temp->len = i;
	temp->next = *head;
	*head = auxi;

	return (auxi);
}
