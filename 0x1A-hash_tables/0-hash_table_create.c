#include "hash_tables.h"

/**
 * hash_table_create - This function create a hash table
 * @size: Is a size of array
 *
 * Return: Always return a hash teble or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *node;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(node) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
