#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char
*_strdup(char *str)
{
	int l = 0;
	int copy = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[l]; l++)
	{
		;
	}

	a = malloc(sizeof(char) * l + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (; copy < l; copy++)
	{
		a[copy] = str[copy];
	}
	a[l] = '\0';
	return (a);
}
