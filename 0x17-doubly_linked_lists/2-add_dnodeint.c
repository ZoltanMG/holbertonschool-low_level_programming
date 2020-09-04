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
	dlistint_t *h;
	dlistint_t *new;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = h;
	*head = new;
	return (new);
}
