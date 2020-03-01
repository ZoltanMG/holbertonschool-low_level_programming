#include <stdio.h>

/**
 * main - main function
 * @argc: numbers of arguments
 * @argv: array that store the arguments
 * Retunr: always: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
