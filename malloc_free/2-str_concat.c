#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


char
*str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	c = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		c[l1] = s1[l1];
	}

	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		c[l1] = s2[l2];
		l1++;
	}
	return (c);
}
