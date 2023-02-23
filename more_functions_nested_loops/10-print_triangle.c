#include "main.h"
#include <stdio.h>

/**
* print_triangle - patric
* Return: Always 0
*/

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size-a-1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
