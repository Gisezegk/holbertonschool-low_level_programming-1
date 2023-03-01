#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert
 *
 * @s: given var
 *
 * Return: idk
 */

int _atoi(char *s)
{
	int c;

	while (*s >= '0' && *s <= '9')
	{
		c = (c * 10) + (*s - '0');
		c++;
	}
	return (c);
}
