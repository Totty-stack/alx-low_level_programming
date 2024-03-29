#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @*f: function pointer to char
 *
 * return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
