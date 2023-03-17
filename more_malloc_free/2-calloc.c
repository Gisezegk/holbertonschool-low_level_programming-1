#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	int i;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(size * nmeb);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmeb * size; i++)
	{
		c[i] = 0;
	}

	return (c);
}
