#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all the data.
 * @head: head of the list
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
