#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: double pointer to start of list
 * @index: index to remove
 *
 * Return: 1/-1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *thead = *head;

	if (*head == NULL)
		return (-1);
	while (thead)
	{
		if (index == 0)
		{
			dlistint_t *tmp = *head;

			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		if (index - 1 == count)
		{
			dlistint_t *deltmp = thead->next;

			if (deltmp)
			{
				thead->next = deltmp->next;
				deltmp->next->prev = thead;
				return (1);
			}
		}
		count++;
		thead = thead->next;
	}
	return (-1);
}
