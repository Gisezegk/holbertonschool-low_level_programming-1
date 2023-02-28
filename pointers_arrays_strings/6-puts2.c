#include "main.h"
#include <stdio.h>

/**
* puts2 - set
* @str: var cjari
* Return: always the size
*/

void puts2(char *str)
{
	
	while(*str != '\0')
	{
		if (*str != '\0')
		{
		_putchar (*str);
		}
		str++;
		str++;
	}
	_putchar('\n');
}
