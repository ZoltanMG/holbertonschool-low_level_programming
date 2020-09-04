#include "lists.h"

/**
 * get_dnodeint_at_index - function that return a spesific node.
 * @head: inked list.
 * @index: index of linked list
 *
 * Return: node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);


	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
