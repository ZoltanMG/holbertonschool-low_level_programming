#include "lists.h"

/**
 * sum_listint - function
 * @head: listint_t
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
