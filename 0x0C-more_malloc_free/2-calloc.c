#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (cont = 0; cont < nmemb; cont++)
		arr[cont] = '\0';

	return (arr);
}
