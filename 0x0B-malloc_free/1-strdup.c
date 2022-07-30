#include "main.h"
#include "stdlib.h"

/**
 * _strdup - function that returns a pointer to new allocated space
 * @str: string to be duplicated
 * @_strdup: function to dubplicatec string
 *
 * Return: NULL if str=Null
 *        pointer to dublicate on success and Null if insufficient space
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc (sizeof (char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];
	duplicate[len] = '\0';

	return (duplicate);
}
