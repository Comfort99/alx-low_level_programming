#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with the key
 * @ht: hash table to be checked
 * @key: they key
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL); /* Invalid input */
	}

	/* Compute the index in the hash table array */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the computed index */
	node = (ht->array)[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value); /* Key found, return associated value */
		}
		node = node->next;
	}
	return (NULL); /* Key not found */
}
