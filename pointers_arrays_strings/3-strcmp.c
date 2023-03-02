#include "main.h"
#include <stdio.h>

/**
 * _strcmp - s
 *
 * Return: always d
 *
 *
 * @s1: given var
 *
 * @s2: given var
 */

int _strcmp(char *s1, char *s2)
{
	int cont = 0, d;

	while (s1[cont] != '\0' || s2[cont] != '\0')
	{
		if (s1[cont] == s2[cont])
		{
			d = 0;
		}
		else if (s1[cont] > s2[cont])
		{
			d = 15;
		}
		else if (s1[cont] < s2[cont])
		{
			d = -15;
		}
	cont++;
	}
	return (d);
}
