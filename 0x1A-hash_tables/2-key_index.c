#include "hash_tables.h"

/**
 * key_index - this function return number of index
 * @key: Is a key word
 * @size: is a size of array
 *
 * Return: number of index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
