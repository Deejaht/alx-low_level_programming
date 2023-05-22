#include "lists.h"

/**
 * sum_dlistint - sum of list elements
 * @head: pointer to start of list
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
