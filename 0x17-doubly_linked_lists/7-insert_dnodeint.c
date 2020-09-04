#include "lists.h"

/**
 * insert_dnodeint_at_index - add node in linked list
 * @h: linked list.
 * @idx: number of index
 * @n: element to linked list
 *
 * Return: new nodw
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = NULL;
	dlistint_t *new = NULL;
	unsigned int count = 1;

	head = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
		*h = new;
	else if (idx == 0)
	{
		new->next = head;
		head->next->prev = new;
		*h = new;
		return (new);
	}
	else
	{
		while (head)
		{
			if (count == idx)
			{
				new->prev = head;
				new->next = head->next;
				head->next->prev = new;
				head->next = new;
				return (new);
			}
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
