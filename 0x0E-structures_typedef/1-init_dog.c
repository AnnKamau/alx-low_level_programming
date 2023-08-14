#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intializes the variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
