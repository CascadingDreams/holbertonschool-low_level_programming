#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: variable
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: intialises a variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
