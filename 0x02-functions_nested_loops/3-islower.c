#include "main.h"

/**
 * int _islower(int c) - fuction that checks for lowercase character
 *
 * Return: 1 if int c is lowercase, else 0
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

