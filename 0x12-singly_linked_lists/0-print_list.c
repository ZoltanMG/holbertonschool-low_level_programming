#include "lists.h"

/**
 * print_list - Function linked.
 * @h: struct.
 * Return: size_t-
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *nil = "(nil)";

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, nil);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
