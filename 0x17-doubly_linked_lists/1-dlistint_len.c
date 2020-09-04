#include "lists.h"

/**
 * dlistint_len - Function that returns list long
 * @h: linked list.
 *
 * Return: return list long
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
