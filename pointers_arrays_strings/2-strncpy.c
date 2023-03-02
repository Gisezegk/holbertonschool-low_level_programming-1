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
	for (; pos < n && fin >= pos; pos++)
	{
		dest[pos] = src[pos];
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}
	return (dest);
}
