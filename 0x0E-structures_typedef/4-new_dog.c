#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	;
	name_copy = malloc(sizeof(char) * (i + 1));
	if (name_copy == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
	;
	owner_copy = malloc(sizeof(char) * (j + 1));
	if (owner_copy == NULL)
	{
	free(name_copy);
	free(new_dog);
	return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	name_copy[i] = name[i];
	name_copy[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	owner_copy[j] = owner[j];
	owner_copy[j] = '\0';

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
