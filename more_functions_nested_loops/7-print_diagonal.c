#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	char c = 0;
	char a = 0;

	for (c = 0; c < n; c++)
	{
		for (a = 0; a < n; a++)	 {
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
	_putchar('\n');
}
