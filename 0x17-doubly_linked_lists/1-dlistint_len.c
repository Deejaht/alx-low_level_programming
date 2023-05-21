#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to the start of the list
 *
 * Return: Number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
