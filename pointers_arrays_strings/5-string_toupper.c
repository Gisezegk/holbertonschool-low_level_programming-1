#include "main.h"

/**
 * string_toupper - please
 * @u: string
 *
 * Return: numb
 */


char *string_toupper(char *u)
{
	int c = 0;

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
