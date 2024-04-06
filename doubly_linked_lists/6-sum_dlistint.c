#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: pointer double link list to check
 * Return: a int number.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *auxi = head;

	while (auxi != NULL)
	{
		auxi = sum + auxi->n;
		auxi = auxi->next;
	}

	return (sum);
}
