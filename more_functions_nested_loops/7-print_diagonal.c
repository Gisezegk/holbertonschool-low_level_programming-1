#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	char c = 0;
	char f = 0;

	for (c = 0; c < n; c++)
	{
		_putchar(92);
		_putchar('\n');

		for (f = 0; f < n; f++)
			if (n > 1) 
			{
				_putchar(n * ' ');
			}
	}
	_putchar('\n');
}
