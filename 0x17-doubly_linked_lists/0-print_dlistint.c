#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list.
 * @h: linked list.
 *
 * Return: list long.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
