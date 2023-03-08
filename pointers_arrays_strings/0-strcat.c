#include "main.h"

/**
 * _strcat - function
 *
 * @dest: var given
 *
 * @src: other var given
 *
 * Return: dest
 *
 */


char *_strcat(char *dest, char *src)
{
	int fin = 0, cont = 0, n = 0;

	while (dest[fin] != '\0')
	{
		fin++;
	}
	while (src[cont] < n)
	{
		dest[fin] = src[cont];
		cont++;
		fin++;
	}
	if (src[cont] >= n)
	{
		dest[fin] = '\0';
	}

	return (dest);
}
