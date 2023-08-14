#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @owner: the dog owner
 * @name: name of dog
 * @age: age of dog
 */

struct dog
{
	char *owner;
	char *name;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
