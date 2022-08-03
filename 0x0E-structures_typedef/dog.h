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
struct dog *dogg(char *name, char *owner, float age)
{
	struct dog *dogg;

	dogg = malloc(sizeof(struct dog));
	dogg->name = name;
	dogg->owner = owner;
	dogg->age = age;
	return (dogg);
}
#endif /* DOG_H */
