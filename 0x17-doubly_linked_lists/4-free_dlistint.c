#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = NULL;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
