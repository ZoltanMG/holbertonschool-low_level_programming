#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht: Is a hash table.
 * @key: Is a key word.
 *
 * Return: Value or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[index]))
		return (NULL);

	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		aux = aux->next;
	}

	return (NULL);
}
