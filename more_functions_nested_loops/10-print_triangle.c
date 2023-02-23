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

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size-a-1)
			{
				_putchar(' ');
			}
			else if (size <= 0)
			{
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
