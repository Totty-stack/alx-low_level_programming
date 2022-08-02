#include <stdio.h>
/**
 * main - prints file name it was compiled from followe by new line
 *
 * return: always zero
 */
int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
