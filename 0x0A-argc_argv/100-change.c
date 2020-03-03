#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: cont
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int valor, cambio = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	valor = atoi(argv[1]);
	while (valor >= 25)
	{
		valor -= 25;
		cambio++;
	}
	while (valor >= 10)
	{
		valor -= 10;
		cambio++;
	}
	while (valor >= 5)
	{
		valor -= 5;
		cambio++;
	}
	while (valor >= 2)
	{
		valor -= 2;
		cambio++;
	}
	while (valor >= 1)
	{
		valor -= 1;
		cambio++;
	}
	printf("%i\n", cambio);
	return (0);
}
