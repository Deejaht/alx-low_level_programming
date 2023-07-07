#include "hash_tables.h"

/**
 * hash_table_create - function name
 * @size: size of hash table
 *
 * Return: hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (!size || !new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_table->array)
	{
		for (i = 0; i < size; i++)
		{
			free(new_table->array[i]->key);
			free(new_table->array[i]->value);
			free(new_table->array[i]);
		}
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
