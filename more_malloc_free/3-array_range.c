#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
*array_range(int min, int max)
{
	int *c;
	int cont;

	if (min > max)
	{
		return (NULL);
	}

	for (cont = 0; min + cont < max; cont++)
	{
		;
	}

	c = malloc(sizeof(int) * (cont + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	if (min == max)
	{
		c[0] = max;
	}

	for (cont = 0; min + cont < max; cont++)
	{
		c[cont] = cont + min;
	}
	return (c);
}
