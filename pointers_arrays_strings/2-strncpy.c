#include "main.h"
#include <stdio.h>

/**
 * _strncpy - s
 *
 * Return: always dest
 *
 * @n: limit
 *
 * @dest: given var
 *
 * @src: given var
 */

char *_strncpy(char *dest, char *src, int n)
{
	int fin = 0, pos = 0;

	while (src[fin] != '\0')
	{
		fin++;
	}
	for (; pos < n; pos++)
	{
		dest[fin] = src[pos];
		fin++;
	
	if (pos >= n)
	{
		break;
	}
	}
	return (dest);
}
