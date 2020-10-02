#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, count, last_index;
	hash_node_t *tmp, *aux;

	if (ht == NULL)
		return;

	for (count = 0; count < ht->size ; count++)
	{
		if (ht->array[count] == NULL)
			continue;
		tmp = ht->array[count];
		last_index = key_index((const unsigned char *) tmp->key, ht->size);
	}

	printf("{");
	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (index !=  last_index)
				printf(", ");
			aux = aux->next;
		}
		index++;
	}

	printf("}\n");
}
