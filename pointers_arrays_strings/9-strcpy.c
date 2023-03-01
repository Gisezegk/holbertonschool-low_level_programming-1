#include "main.h"
#include <stdio.h>
#include <string.h>

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
	for (pos = 0; pos < fin; pos++)
	{
		strcpy(dest, src);
	}
	return (dest);
}
