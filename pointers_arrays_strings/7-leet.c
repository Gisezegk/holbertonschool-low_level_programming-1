#include "main.h"

/**
 * leet - please
 * @u: string
 *
 * Return: numb
 */

char *leet(char *u)
{
	int c = 0, p = 0;

	int l[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int r[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (u[p] != '\0')
	{
		p++;
		while (l[p] != '\0')
		{
			c++;
			if (u[p] == l[c])
			{
				u[p] = r[c];
			}
		}
	}
	return (u);
}
