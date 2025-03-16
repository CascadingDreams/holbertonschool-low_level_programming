#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - info about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this holds info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
