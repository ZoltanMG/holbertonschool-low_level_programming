#include "lists.h"

/**
 * listint_len - function
 * @h: struct listint_t
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
