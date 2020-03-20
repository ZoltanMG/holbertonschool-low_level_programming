#include "lists.h"

/**
 * add_node_end - function
 * @head: list
 * @str: string
 *
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo, *aux;
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
	nuevo->next = NULL;

	if (!(*head))
		*head = nuevo;
	else
	{
		aux = *head;
		while ((aux->next))
			aux = aux->next;
		aux->next = nuevo;
	}
	return (*head);
}
