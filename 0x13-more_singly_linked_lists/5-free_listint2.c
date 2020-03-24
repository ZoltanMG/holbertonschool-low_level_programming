#include "lists.h"

/**
 * free_listint2 - function
 * @head: listint data type
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
	}
	*head = NULL;
}
