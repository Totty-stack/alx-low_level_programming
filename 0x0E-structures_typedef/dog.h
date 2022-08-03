#ifndef DOG_H
#define DOG_H

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

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
