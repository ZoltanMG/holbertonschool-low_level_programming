#include "lists.h"

/**
* add_dnodeint - add node in an linked list
* @head: double pointer to linked list
* @n: number
*
* Return: NUll or *head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	aux = *head;
	new->next = aux;
	aux->prev = new;
	*head = new;
	return (*head);
}