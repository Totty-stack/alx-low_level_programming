#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c - character that initializes
 * @*size - size of array
 *
 * return: NULL if size == 0 or function fails
 *	return *p if fails
 */
char *create_array(unsigned int size, char c)
{
	unassigned int index;
	char *po;

	if (size == 0)
		return(NULL);

	po = malloc(size * sizeof(char));

		if (array == NULL)
			return(NULL);
	for (index = 0; index < size; index++)
		array [index] = c;
	return (array);
}
