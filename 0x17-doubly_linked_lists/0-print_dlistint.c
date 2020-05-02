#include "lists.h"

/**
 * print_dlistint - print elements in an linked lists
 * @h: list
 *
 * Return: numbers of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = NULL;
	size_t elements = 0;

	head = h;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	elements++;
	}
	return (elements);
}