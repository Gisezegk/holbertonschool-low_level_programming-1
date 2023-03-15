#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


char
*str_concat(char *s1, char *s2)
{
	int c;
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int t = l1 + l2 + 1;
	char *s = calloc(t, sizeof(char));

	for (c = 0; c < l1; c++)
	{
		s[c] = s1[c];
	}

	for (c = 0; c < l2; c++)
	{
		s[l1 + c] = s2[c];
	}

	s[t - 1] = '\0';
	return (s);
}
