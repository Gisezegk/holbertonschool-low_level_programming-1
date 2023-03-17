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

	c = malloc(sizeof(int) * cont);
		if (c == NULL)
			return (NULL);

	for (cont = 0; min + cont < max; cont++)
	{
		c[cont] = cont + min;
	}

	return (c);

}
