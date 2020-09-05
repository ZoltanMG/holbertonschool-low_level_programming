#include "lists.h"

/**
 * add_dnodeint - Function that add node to linked list.
 * @head: linked list head.
 * @n: linked list element.
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head->prev = new;
		*head = new;
	}

	return (new);
}
