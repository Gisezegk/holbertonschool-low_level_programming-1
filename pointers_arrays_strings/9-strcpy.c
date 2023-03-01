#include "main.h"
#include <stdio.h>

/**
**_strcpy - given
*@src: given var
*/

char *_strcpy(char *dest, char *src)
{
	int fin = 0, pos = 0;

	while (src[fin] != '\0')
	{
		fin++;
	}
	for (pos = 0; pos <= fin; pos++)
	{
		dest[pos] = src[pos];
	}
	if (pos == fin + 1)
	{
		dest[pos] = '\0';
	}
	return (dest);
}
