#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a dlitint_t
 * @head: head of dlistint_t
 * @n: dlistint_t element
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *h = NULL;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	return (new);
}
