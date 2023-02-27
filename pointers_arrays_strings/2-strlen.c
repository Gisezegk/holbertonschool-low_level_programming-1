#include "main.h"
#include <stdio.h>

/**
* swap_int - set
* @*s: var s
* @s: var cjari
*/

int _strlen(char *s)
{
	int size;
	size = 0;
	
	while (*s != '\0')
	{
		size++;
		*s++;
	}
	return (size);
}
