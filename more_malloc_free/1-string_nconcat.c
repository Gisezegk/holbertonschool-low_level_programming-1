#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	c = (char *)malloc(strlen(s1) + n + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		c[l1] = s1[l1];
	}

	for (l2 = 0; l2 < n; l2++)
	{
		c[l1] = s2[l2];
		l1++;
	}

	return (c);
}
