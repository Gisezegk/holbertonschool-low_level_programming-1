#include "main.h"

/**
 * @c: count
 * @u: string
 *
 * Return:
 */


char *string_toupper(char *u)
{
	int c;

	while (u[c] != '\0')
	{
		if (u[c] >= 'a' && u[c] <= 'z')
		{
			u[c] = (int)u[c] - 32;
		}
		c++;
	}
	return (u);
}
