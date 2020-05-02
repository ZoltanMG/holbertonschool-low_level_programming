#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: linked lists
 *
 * Return: number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = NULL;
	size_t elements = 0;

	head = h;
	while (head)
	{
		head = head->next;
		elements++;
	}
	return (elements);
}
