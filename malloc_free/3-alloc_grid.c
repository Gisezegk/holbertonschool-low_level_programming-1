#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int t, p;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		a[t] = malloc(sizeof(int) * width);
		if (a[t] == NULL)
		{
			for (t = 0; t < height; t++)
			{
				free(a[t]);
			}
			free(a);
			return (NULL);
		}
		for (p = 0; p < width; p++)
		{
			a[t][p] = 0;
		}
	}
	return (a);
}
