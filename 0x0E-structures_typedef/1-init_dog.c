#include "dog.h"

/**
 * init_dog - function to initialize varabile with dog type
 * @d: d vairable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;

	return (0);
}
