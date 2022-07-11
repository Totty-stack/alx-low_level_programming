#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
		_putchar('\n');
}
