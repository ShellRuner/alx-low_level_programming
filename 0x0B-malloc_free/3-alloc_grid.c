#include "main.h"

/**
 * alloc_grid - A functon that return a 2D array of intergers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2D array or NULL(faill)
 */
int **alloc_grid(int width, int height)
{
	int i, e, j;
	int **array = malloc(sizeof(int *) * height);

	if (width == 0 || height == 0)
		return (NULL);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (j = 0; j < width; j++)
		{
			*(array[e] + j) = 0;
		}
	}
	return (array);

}
