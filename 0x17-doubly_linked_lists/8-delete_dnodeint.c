#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in a  linked list.
 * @head: doubly pointer to linked list.
 * @index: intex to delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *h = *head;

	if (h == NULL)
		return (-1);
	while (h->next)
	{
		h = h->next;
		count++;
	}

	h = *head;
	if (index == 0)
	{
		*head = h->next;
		h->prev = NULL;
		free(h);
		return (1);
	}
	else if (index > 0 && index < count)
		return (delet_node(head, index));
	else if (index == count)
	{
		while (h->next)
			h = h->next;

		if (h->prev != NULL)
			h->prev->next = NULL;
		else
			*head = NULL;
		free(h);
		return (1);
	}
	return (-1);
}

/**
 * delet_node - delete node in a  linked list.
 * @head: doubly pointer to linked list.
 * @index: intex to delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delet_node(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int count = 0;

	while (h)
	{
		if (count == index)
		{
			h->prev->next = h->next;
			h->next->prev = h->prev;
			free(h);
			break;
		}
		h = h->next;
		count++;
	}
	return (1);
}
