#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - set
* @a: var cjari
* @n: var
* Return: always the size
*/

void puts_half(char *str)
{
	int c = 0, d, i = 0;

	while (str[i] != '\0')
	{
		i++;
		c++;
	}
	if (c % 2 == 0)
	{
		d = c / 2;
	}
	else
	{
		d = (c + 1) / 2;
	}
	for (i = d; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');	
}
