#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
	{
		return;
	}
	/* Iterate through each index in the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Free each linked list */
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
