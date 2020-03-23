#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: listint_t data type
 * @n: integer
 *
 * Return: listint_t data type
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;

		aux->next = new;
	}

	return (*head);
}
