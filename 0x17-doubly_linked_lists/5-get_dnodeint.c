#include "lists.h"

/**
* get_dnodeint_at_index - return the specific node
* @head: linked list
* @index: number of node
*
* Return: specific node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (count <= index || head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
