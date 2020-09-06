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
	unsigned int count = 0;
	dlistint_t *head = *h;
	dlistint_t *new = NULL;

	while (head)
	{
		count++;
		head = head->next;
	}

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx > 0 && idx < count)
	{
		new = add_node_num(h, idx, n);
		return (new);
	}
	else if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}

/**
 * add_node_num - add node in linked list
 * @h: linked list.
 * @idx: number of index
 * @n: element to linked list
 *
 * Return: new nodw
 */
dlistint_t *add_node_num(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h;
	unsigned int count = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (new);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (head)
	{
		if (idx == count)
		{
			new->next = head->next;
			head->next->prev = new;
			new->prev = head;
			head->next = new;
			return (new);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
