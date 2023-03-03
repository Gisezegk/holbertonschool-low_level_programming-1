#include "main.h"
#include <stdio.h>

char 
*_strstr(char *haystack, char *needle)
{
	printf("hola %d%c", haystack[0], needle[0]);
	return (haystack + 5);
}
