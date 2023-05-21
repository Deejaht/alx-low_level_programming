#include "lists.h"

/**
 * add_dnodeint - adds a node at start of list
 * @head: Double pointer to the start of list
 * @n: Value to add at start of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	if (!new_node || !head)
		return (NULL);
	if (*head == NULL)
		*head = new_node;
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
