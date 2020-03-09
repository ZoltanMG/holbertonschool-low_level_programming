#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name ? printf("%s\n", d->name) : printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner ? printf("%s\n", d->owner) : printf("(nil)\n");
	}
}
