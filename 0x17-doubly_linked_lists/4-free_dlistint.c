#include "lists.h"
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
