#include "main.h"

/**
 *alloc_grid - This function returns a pointer to a 2 dimensional array of int.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to new array
 */
int **alloc_grid(int width, int height)
{
	int **gridall;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	gridall = malloc(height * sizeof(*gridall));
	if (gridall == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gridall[i] = malloc(width * sizeof(**gridall));
		if (gridall[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridall[i]);
			free(gridall);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			gridall[i][j] = 0;
	}

	return (gridall);
}
