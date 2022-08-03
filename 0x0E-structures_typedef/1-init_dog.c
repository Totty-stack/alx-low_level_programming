#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - function that initializes a variable of type
 * @name: char data type
 * @age: int data type
 * @owner: char data type
 * @*d: pointer to function
 *
 *return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
