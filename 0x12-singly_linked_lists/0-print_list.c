#include "lists.h"

/**
 * print_list - Function linked.
 * @h: struct.
 * Return: size_t-
 */
size_t print_list(const list_t *h)
{
	const list_t *nulo;
	size_t n = 0;

	nulo = h;
	while (nulo)
	{
		if (nulo->str == NULL)
		{
			printf("[0] (nil)\n");
			nulo = nulo->next;
			n++;
		}
		printf("[%ld] %s\n", strlen(nulo->str), nulo->str);
		nulo = nulo->next;
		n++;
	}
	return (n);
}
