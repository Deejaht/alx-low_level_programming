#include "hash_tables.h"

/**
 * key_index - a function
 * @key: item key
 * @size: table size
 *
 * Return: long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
