#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

/**
 * new_dog - function
 * @name: char
 * @age: float
 * @owner: owner
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
		return (NULL);

	dog->age = age;

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}

/**
 * _strdup - the function
 * @str: the char
 * Return: the char
 */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}

	return (a);
}
