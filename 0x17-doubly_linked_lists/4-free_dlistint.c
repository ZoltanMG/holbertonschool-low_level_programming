#include "lists.h"

/**
* free_dlistint - free an linked list
* @head: the linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux_1, *aux_2;

	if (!head)
		return;
	aux_1 = head;
	aux_2 = aux_1->next;

	while (aux_2)
	{
		free(aux_1);
		aux_1 = aux_2;
		aux_2 = aux_1->next;
	}
	free(aux_1);
}
