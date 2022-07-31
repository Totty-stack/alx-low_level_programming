#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 *              to a 2D array of intergers
 * @width: elememt of grid
 * @height: element of grid
 *
 * Return: NULL when function fails or width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int c, d;
	int **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc(sizeof(int) * width);
	
	if (str == NULL)
		return (NULL);
	
	for  (d = 0; d < height; d++);

	str[d] = malloc(sizeof(int) * height);
	if  (str[d] == NULL)
		return (NULL);

	for (c = 0; c < width; c++);
	for  (d = 0; d < height; d++);
	str[c][d] = 0;
	
	return  (NULL);

}
