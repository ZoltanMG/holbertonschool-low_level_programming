#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function
 * @ac: int
 * @av: char
 * Return: arr
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int cont;
	int cont2;
	int cont3 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (cont = 0; cont < ac; cont++)
	{
		for (cont2 = 0; av[cont][cont2]; cont2++)
		{
			cont3++;
		}
	}

	arr = malloc((cont3 + ac + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	cont3 = 0;

	for (cont = 0; cont < ac; cont++)
	{
		for (cont2 = 0; av[cont][cont2]; cont2++)
		{
			arr[cont3] = av[cont][cont2];
			cont3++;
		}
		arr[cont3] = '\n';
		cont3++;
	}
	arr[cont3] = '\0';
	return (arr);
}
