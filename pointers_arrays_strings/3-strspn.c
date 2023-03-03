#include "main.h"

/**
 * _strspn - given
 * @s: char
 * @accept: given char
 * Return: the cont
 */

unsigned int _strspn(char *s, char *accept)
{
	int cont = 0, pos = 0, character = 0;

	while (s[cont] != '\0')
	{
		while (accept[pos] != '\0')
		{
		if (accept[pos] == s[cont])
		{
			character++;
		}
		pos++;
		}
		character++;
		}
	return (character);
}
