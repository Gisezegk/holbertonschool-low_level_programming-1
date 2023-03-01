#include "main.h"

/**
 * *_strcat - function
 *
 * @dest: var given
 *
 * @src: other var given
 *
 */


char *_strcat(char *dest, char *src)
{
	int fin = 0, cont = 0;

	while (dest[fin] != '\0')
	{
		fin++;
	}
	while (src[cont] != '\0')
	{
		dest[fin] = src[cont];
		cont++;
		fin++;
	}
	
	return (dest);
}
