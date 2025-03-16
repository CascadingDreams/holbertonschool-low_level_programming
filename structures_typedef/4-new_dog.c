#include "dog.h"
#include <stdio.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog_t struct, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;
	int j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; nam[i] != '\0'; i++)
	new_dog->name = malloc(i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new_dog->name[j] = name[j];
	}
	new_dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	new_dog->owner = malloc(i + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[i] = '\0';
	new_dog->age = age;
	return (new_dog);
}
