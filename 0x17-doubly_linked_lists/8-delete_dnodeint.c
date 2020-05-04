#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: Double pointer to struct
 * @index: integer
 * Return: 1 in succes  -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	dlistint_t *aux_2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	aux_2 = *head;
	while (aux)
	{
		aux = aux->next;
		if (count == (index - 1))
		{
			if (aux->next != NULL)
			{
				aux->next->prev = aux_2;
				aux_2->next = aux->next;
				free(aux);
				return (1);
			}
			else
			{
				aux_2->next = NULL;
				free(aux);
				return (1);
			}
		}
		aux_2 = aux_2->next;
		count++;
	}
	return (-1);
}