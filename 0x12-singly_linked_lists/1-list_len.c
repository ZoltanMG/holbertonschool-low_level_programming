#include "lists.h"

/**
 * list_len - Function linked.
 * @h: struct.
 * Return: size_t-
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
