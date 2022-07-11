#include "main.h"

/**
 * _strlen - a function that returns length of string
 * @s: char 
 * Return: length of i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
