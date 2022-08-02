#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - defining a new data type
 * @name: data type of char
 * @owner: data type of char
 * @age: data type int
 *
 * return: NULL if fails and my_dog if passes.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
struct dog *my_dog (char *name, char *owner, int age)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;

	return (my_dog);
}
