#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	h = head;

	while(h)
	{
		if (count == index)
			return (h);
		h = h->next;
		count++;
	}
	return (NULL);
}
