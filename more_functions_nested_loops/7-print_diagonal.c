#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	char c = 1;
	int f = 0;

	while (f != c) 
	{ 
		f++;
		_putchar(' ');
		for (c = 0; c <= n; c++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
