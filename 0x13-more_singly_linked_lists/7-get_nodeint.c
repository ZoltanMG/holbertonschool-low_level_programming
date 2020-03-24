#include "lists.h"

/**
 * get_nodeint_at_index - Function.
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
