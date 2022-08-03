#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - defines new data type
 * @name: char data type
 * @owner: char data type
 * @age: int data type
 *
 * return: my_dog.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
struct dog *my_dog(char *name, char *owner, float age)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;
	return (my_dog);
}
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
