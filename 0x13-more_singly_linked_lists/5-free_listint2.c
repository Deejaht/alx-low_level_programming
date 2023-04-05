#include "lists.h"

/**
 * free_listlint2 - The function sets the head to NULL
 * @head: pointer to the linstint_t list to be freed
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
