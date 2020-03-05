#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: int
 * @size: int
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int cont, res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = size * nmemb;
	arr = malloc(res);

	if (arr == NULL)
		return (NULL);

	for (cont = 0; cont < res; cont++)
		arr[cont] = 0;

	return (arr);
}
