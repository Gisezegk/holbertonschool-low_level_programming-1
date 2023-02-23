#include "main.h"
/**
* print_square - prints the alphabet.
*@size: square size
*/

void print_square(int size)
{
	int c, f = 0;

	if (size > 0)
	{
	for (c = 0; c < size; c++)
	{
		for (f = 0; f < size; f++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
