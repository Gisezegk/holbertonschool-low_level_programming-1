#include "main.h"
#include <stdio.h>

/**
* print_rev - set
* @s: var cjari
* Return: always the size
*/

void print_rev(char *s)
{
	int patric = 0;

	while (*s != '\0')
	{
		s++;
		patric++;
	}
	while (patric > 0)
	{
		s--;
		_putchar(*s);
		patric--;
	}
	_putchar('\n');
}
