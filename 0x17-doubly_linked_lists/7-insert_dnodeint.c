#include "lists.h"

/**
* insert_dnodeint_at_index - add nodo
* @h: pointer to linked lists
* @idx: number of index to add node
* @n: number of int n
*
* Return: node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (aux)
	{
		if (count == idx)
		{
			new->prev = aux->prev;
			(aux->prev)->next = new;
			aux->prev = new;
			new->next = aux;
			return (new);
		}
		else if (!aux->next && (count + 1) == idx)
			return (add_dnodeint_end(h, n));
		aux = aux->next;
		count++;
	}
	return (NULL);
}
