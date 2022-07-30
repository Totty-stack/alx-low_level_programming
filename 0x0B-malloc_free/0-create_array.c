#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and initializes it with a specific character
 * @c: character that initializes
 * @size: size of array
 *
 * return: NULL if size == 0 or function fails
 *	return pointer to array if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

		if (array == NULL)
			return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
