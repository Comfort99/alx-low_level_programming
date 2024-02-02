#include "hash_tables.h"
/**
 * key_index - function to find an index within the hash
 * table’s array where the key/value pair should be stored
 * @key: is the key
 * @size: size of the array hash table
 * Return: Index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
