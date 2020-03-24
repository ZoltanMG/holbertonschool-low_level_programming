#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer to list
 * @idx: number of index
 * @n: number of n
 *
 * Return: addres new nodo
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head, *aux;
	unsigned int count = 1;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (count < idx)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	aux = new;
	aux->next = tmp->next;
	tmp->next = aux;
	return (aux);
}
