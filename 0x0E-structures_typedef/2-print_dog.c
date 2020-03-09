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
		d->name ? printf("Name: %s\n", d->name) : printf("(nil)\n");
		printf("Age: %f\n", d->age);
		d->owner ? printf("Owner: %s\n", d->owner) : printf("(nil)\n");
	}
}
