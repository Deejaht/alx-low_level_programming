#include "hash_tables.h"

/**
 * hash_table_get - function name
 * @ht: head
 * @key: key
 *
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *tempnode;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tempnode = ht->array[index];
	if (tempnode == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	while (tempnode && tempnode->next != NULL)
	{
		if (strcmp(tempnode->key, key) == 0)
			return (tempnode->value);
		tempnode = tempnode->next;
	}
	return (NULL);
}
