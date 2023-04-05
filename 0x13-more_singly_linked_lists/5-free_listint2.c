#include "lists.h"

/**
 * free_listlint2 - The function sets the head to NULL
 * @head: pointer to the linstint_t list to be freed
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return;

	while (temp != NULL)
	{
		next = (temp)->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
