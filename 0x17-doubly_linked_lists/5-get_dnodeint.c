#include "lists.h"

/**
* get_dnodeint_at_index - return the specific node
* @head: linked list
* @index: number of node
*
* Return: specific node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *aux;

	if (!head)
		return (NULL);
	aux = head;
	while (aux)
	{
		if (count == index)
			return (aux);
		aux = aux->next;
		count++;
	}

	return (NULL);
}
