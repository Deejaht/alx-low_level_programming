#include "lists.h"
/**
 * get_nodeint_at_index - return the node at a certin index in a linked list
 * @head: first node in the linked list
 * @index: inde x of a node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
{
	temp = temp->next;
	i++;
}

	return (temp ? temp : NULL);
}
