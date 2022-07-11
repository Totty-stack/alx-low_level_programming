#include "main.h"

/**
 *swap_int - a function that swaps values
 * @a: integers to swap
 * @b: interger to swap
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
