#include "dog.h"

/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Null if the function fails struct dog if it succeeds
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	new_dog->name == NULL || new_dog->owner == NULL ? return (NULL) : return (new_dog);
}
