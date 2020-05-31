#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t node;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof((node)) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	return (table);	
}