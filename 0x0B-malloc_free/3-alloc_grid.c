#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates for a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	i = j = 0;
	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
		}
	return (p);
}
