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

	while (src[fin] != '\0' -1)
	{
		fin++;
	}
	for (pos = 0; pos <= fin; pos++)
	{
		dest[pos] = src[pos];
		if (pos == n)
		{
			break;
		}
		}
	return (dest);
}
