#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	int cont = 0, pos = 0;

	while (s[cont])
	{
		while (accept[pos])
		{
			if (s[cont] == accept[pos])
			{
				return (s + cont);
			}
			pos++;
		}
		cont++;
	}
	return ('\0');
}
