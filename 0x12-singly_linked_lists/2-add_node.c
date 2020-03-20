#include "lists.h"

/**
 * add_node - function
 * @head: list
 * @str: string
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	nuevo = malloc(sizeof(list_t));
	if (!nuevo)
		return (NULL);

	nuevo->str = strdup(str);
	nuevo->len = i;
	nuevo->next = *head;
	*head = nuevo;
	return (*head);
}
