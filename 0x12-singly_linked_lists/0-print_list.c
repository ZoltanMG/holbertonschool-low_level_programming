#include "lists.h"

/**
 * print_list - This function print all nodos of a linked list.
 * @h: Is a linked list.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n_nodo = 0;
	char *nil = "(nil)";

	if (h == NULL)
		return (0);
	while (h)
	{
		if (!(h->str))
			printf("[%d] %s\n", 0, nil);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_nodo++;
	}
	return (n_nodo);
}
