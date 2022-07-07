#include "main.h"
/**
 * _isdigit - function that checks for a digit 1 to 9
 * @c: single digit
 * Return: 1 if c is didgit, 0 otherwise
 */
int _isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
