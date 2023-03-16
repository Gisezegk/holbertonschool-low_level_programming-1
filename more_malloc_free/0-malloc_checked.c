#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void
*malloc_checked(unsigned int b)
{
	unsigned int f;

	f = malloc(b * sizeof(int));

	if (f == NULL)
	{
		exit(98);
	}
	return (f);
}
