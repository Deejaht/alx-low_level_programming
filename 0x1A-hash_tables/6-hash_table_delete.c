#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	if (ht)
	{
		unsigned int i = 0;

		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *tempnode = ht->array[i];
			hash_node_t *tempnode_2 = ht->array[i];

			while (tempnode)
			{
				free(tempnode->key);
				free(tempnode->value);
				tempnode_2 = tempnode;
				tempnode = tempnode->next;
				free(tempnode_2);
			}
		}
		free(ht->array);
		free(ht);
	}
}
