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
	unsigned int count;
	listint_t *new = NULL;
	listint_t *aux = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	aux = *head;
	for (count = 1; count < idx; count++)
		aux = aux->next;

	new->next = aux->next;
	aux->next = new;
	return (new);
}
