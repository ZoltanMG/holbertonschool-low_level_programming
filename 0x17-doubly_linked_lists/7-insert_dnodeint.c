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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}

	aux = *h;
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
	free(new);
	return (NULL);
}
