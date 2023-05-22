#include "lists.h"

/**
 * add_dnodeint_end - do same
 * @head: double pointer to start of list
 * @n: number to add
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp_head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp_head = *head;
		while (tmp_head->next != NULL)
			tmp_head = tmp_head->next;
		tmp_head->next = new_node;
	}
	return (new_node);
}
