#include "lists.h"

/**
 * pop_listint - function
 * @head: list
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !(*head))
		return (0);
	tmp = *head;
	n = tmp->n;

	*head = tmp->next;
	free(tmp);
	return (n);
}
