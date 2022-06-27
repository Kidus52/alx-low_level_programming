#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - concatinate two strings
 * @width: width of the grid
 * @height: height of the grid
 * Return: allocated grid
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(sizeof(int *) * (height));
	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = malloc(sizeof(int) * width);
		while (j < width)
		{
			if (p[i] == NULL)
			{
				for (i = 0; i < height; i++)
					free(p[i]);

				free(p);
				return (NULL);
			}
			p[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}

	return (p);
}
