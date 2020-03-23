#include "lists.h"

/**
 * print_listint - function that print integers
 * @h: varible listint_t
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
