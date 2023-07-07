#include "hash_tables.h"

/**
 * hash_table_print - function name
 * @ht: head
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht)
	{
		unsigned long int i = 0;
		int gap = 0;

		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (gap == 0)
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				else
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);

				if (ht->array[i]->next)
				{
					hash_node_t *tempnode = ht->array[i]->next;

					while (tempnode->next != NULL)
					{
						printf(", '%s': '%s'", tempnode->key, tempnode->value);
						tempnode = tempnode->next;
					}
				}
				gap = 1;
			}
		}
		printf("}\n");
	}
}
