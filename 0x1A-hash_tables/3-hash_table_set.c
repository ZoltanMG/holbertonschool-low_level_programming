#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * Return: 1 in success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *aux;

	if (!key || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	aux = ht->array[index];
	if (aux)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = node;
	}
	else
		ht->array[index] = node;
	return (1);
}
