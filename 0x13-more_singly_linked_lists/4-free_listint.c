#include "lists.h"

/**
 * free_listint - function that free a linked list
 * @head: listint_t to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(head);
		head = temp;
	}
}


