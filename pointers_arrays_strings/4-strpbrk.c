#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	int cont = 0, pos = 0;

	while (s[cont] != '\0')
	{
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
