#include "lists.h"

/**
 * insert_dnodeint_at_index - title
 * @h: double pointer to head
 * @idx: index to insert node
 * @n: value to insert
 *
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *head = *h;
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (idx == count)
	{
		head->prev = new_node;
		new_node->next = head;
		*h = new_node;
		return (new_node);
	}
	while (head)
	{
		if (count == idx - 1)
		{
			dlistint_t *head_next = head->next;

			new_node->next = head_next;
			new_node->prev = head;
			head->next = new_node;
			if (head_next)
				head_next->prev = new_node;
			*h = temp;
			return (new_node);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
