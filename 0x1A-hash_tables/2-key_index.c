#include "hash_tables.h"

/**
 * key_index - function to get index where a key/value
 *      pair should be stored in array of a hash table.
 * @key: index of key to get.
 * @size: size of array of the hash table.
 *
 * Return: index of the key.
 * Description: will use djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
