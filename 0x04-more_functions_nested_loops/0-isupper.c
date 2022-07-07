#include "main.h"
/**
 * _isupper - function that checks uppercase character
 * @c: single letter character
 * Return: 1 is c is uppercase, 0 otherwise
 */
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

