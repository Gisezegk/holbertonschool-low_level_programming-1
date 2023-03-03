#include "main.h"


/**
 * _strpbrk - func
 *
 * @s: given
 * @accept: other given
 *
 * Return: null
 */


char *_strpbrk(char *s, char *accept)
{
	int cont = 0, pos = 0;

	while (s[cont] != '\0')
	{
		pos++;
		while (accept[pos] != '\0')
		{
			if (s[cont] == accept[pos])
			{
				return (s + pos);
			}
			pos++;
		}
	cont++;
	}
	return ('\0');
}
