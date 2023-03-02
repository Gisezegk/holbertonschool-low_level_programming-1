#include "main.h"

/**
 * _strncat - function
 *
 * @dest: var given
 *
 * @src: other var given
 *
 * @n: limi
 *
 * Return: dest
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int fin = 0, cont = 0;

	while (dest[fin] != '\0')
	{
		fin++;
	}
	while (src[cont] < n)
	{
		dest[cont] = src[cont];
		cont++;
		fin++;
	}
	if (src[cont] == n)
	{
		src[cont] = '\0';
	}

	return (dest);
}
