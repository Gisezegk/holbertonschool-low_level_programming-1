#include "main.h"

/**
 * _strchr - epico
 * @c: var
 * @c: tac
 * Return: always var
 *
 */


char *_strchr(char *s, char c)
{
	int cont = 0;

	while (cont[s])
	{
	if (*s == c)
	{
		return(s);
	}
	cont++;
	}
	return('\0');
}	
