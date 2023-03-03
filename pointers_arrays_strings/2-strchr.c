#include "main.h"

/**
 * _strchr - epico
 * @c: var
 * @s: tac
 * Return: always var
 *
 */


char *_strchr(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0' && s[cont] != c)
	{
		cont++;
	}
	if (c == s[cont])
	{
		return (&s[cont]);
	}
	else
	{
		return ('\0');
	}
	return ('\0');
}
