#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
