#include "hash_tables.h"

/**
 * hash_table_create - funtion to create a hash table.
 * @size: size of the array.
 *
 * Return: NULL if an error occurs.
 *         Otherwise - pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsht;
	unsigned long int x;

	hsht = malloc(sizeof(hash_table_t));
	if (hsht == NULL)
		return (NULL);

	hsht->size = size;
	hsht->array = malloc(sizeof(hash_node_t *) * size);
	if (hsht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hsht->array[x] = NULL;

	return (hsht);
}
