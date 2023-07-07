#include "hash_tables.h"

/**
 * create_item - create node
 * @key: key
 * @value: value
 * @head: head
 *
 * Return: hashNode-t
 */
hash_node_t *create_item(const char *key, const char *value, hash_node_t *head)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item)
	{
		return (NULL);
	}

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = head;
	return (item);
}

/**
 * hash_table_set - set a hash table
 * @ht: head
 * @key: key
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *item = NULL;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		item = create_item(key, value, ht->array[index]);
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
		}
		else
		{
			hash_node_t *head = ht->array[index];

			item = create_item(key, value, head);
			ht->array[index] = item;
			item->next = head;
			head = item;
		}
	}
	return (1);
}
