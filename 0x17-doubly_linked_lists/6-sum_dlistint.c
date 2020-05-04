#include "lists.h"

/**
* sum_dlistint - sum all n data
* @head: linked list with the data
*
* Return: summ
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
