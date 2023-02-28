#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - set
* @s: var cjari
* Return: always the size
*/

void rev_string(char *s)
{
	int c = 0, i;
	char aux = 0, *patric = s;

	while (*patric != '\0')
	{
		patric++;
		c++;
	}
	for (i = 0; i < c / 2; i++)
	{
		aux = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = aux;
	}
}
