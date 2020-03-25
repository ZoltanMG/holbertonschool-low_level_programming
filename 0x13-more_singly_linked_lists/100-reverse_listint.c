#include "lists.h"

/**
 * reverse_listint - function
 * @head: listint_t
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head, *aux;

	if (*head == NULL)
		return (NULL);
	while (tmp->next != NULL)
	{
		aux = tmp->next;
		tmp->next = aux->next;
		aux->next = *head;
		*head = aux;
	}
	return (*head);
}
