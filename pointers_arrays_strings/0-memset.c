#include "main.h"

/**
 *_memset - epico
 *@s: var
 *@b: var
 *@n: tac
 *Return: always var
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
