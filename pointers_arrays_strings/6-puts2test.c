#include "main.h"
#include <stdio.h>
#include <string.h>

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
		putchar (*str);
		}
		str++;
		if (*str = '\0')
		{
			break;
		}
		str++;
	}
	_putchar('\n');
}
