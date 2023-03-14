#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char
*create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a = 0;


	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
