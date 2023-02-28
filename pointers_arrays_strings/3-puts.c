#include "main.h"
#include <stdio.h>

/**
* _puts - set
* @str: var cjari
* Return: always the size
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}
	_putchar('\n');
}
