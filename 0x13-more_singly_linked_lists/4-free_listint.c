#include "lists.h"

/**
 * free_listint - function
 * @head: listint data type
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
