#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void
*malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);

	if (f == NULL)
	{
		exit(98);
	}
	return (f);
}
