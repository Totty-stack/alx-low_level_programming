#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10x the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alpha, re;

	re = 0;

	while (re < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		re++;
		_putchar('\n');
	}
}
