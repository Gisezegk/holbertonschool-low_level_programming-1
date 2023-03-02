#include "main.h"

/**
 * cap_string - please
 * @u: string
 * @c: always count
 *
 * Return: numb
 */


char *cap_string(char *u)
{
	int c = 0;

	while (u[c])
	{
		while (!(u[c] > 'a' && u[c] < 'z'))
		{
			c++;
		}
		if (u[c - 1] == ' ' ||
				u[c - 1] == '\t' ||
				u[c - 1] == '\n' ||
				u[c - 1] == ',' ||
				u[c - 1] == ';' ||
				u[c - 1] == '.' ||
				u[c - 1] == '!' ||
				u[c - 1] == '?' ||
				u[c - 1] == '"' ||
				u[c - 1] == '(' ||
				u[c - 1] == ')' ||
				u[c - 1] == '}' ||
				u[c - 1] == '{' ||
				c == 0)
		{
			u[c] = u[c] - 32;
		}
		c++;
	}
	return (u);
}



