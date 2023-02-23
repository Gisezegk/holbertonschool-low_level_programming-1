#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	int c = 0;
	int f = 0;

	while (f != c) 
	{ 
		f++;
		_putchar(' ');
		for (c = 1; c <= n; c++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
