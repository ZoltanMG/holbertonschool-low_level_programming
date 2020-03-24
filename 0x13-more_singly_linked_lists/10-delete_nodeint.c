#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *aux, *aux2;

	if (!head || !(*head))
		return (-1);
	aux = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (count = 1; count < index; count++)
	{
		aux = aux->next;
		if (!aux)
			return (-1);
	}
	aux2 = aux->next;
	aux->next = aux2->next;
	free(aux2);
	return (1);
}
