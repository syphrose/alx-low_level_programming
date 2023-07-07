#include "hash_tables.h"
/**
 * key_index - gives the index of the given key
 * @key: string to the hash
 * @size: size of the table
 *
 * Return:  index at which the key/value pair should
 * be stored in the array of the hash table
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
