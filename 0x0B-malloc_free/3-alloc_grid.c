#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **sayne;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	sayne = malloc(sizeof(int *) * height);

	if (sayne == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		sayne[a] = malloc(sizeof(int) * width);

		if (sayne[a] == NULL)
		{
			for (; a >= 0; a--)
				free(sayne[a]);

			free(sayne);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			sayne[a][b] = 0;
	}

	return (sayne);
}
