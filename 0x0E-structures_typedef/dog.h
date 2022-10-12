#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Struct dog
 * @name: name pointer variable
 * @age: age pointer variable
 * @owner: owner pointer variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif /* DOG_H */
