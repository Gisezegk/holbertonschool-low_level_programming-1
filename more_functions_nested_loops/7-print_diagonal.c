#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
*/

void print_diagonal(int n)
{
	char c = 0;

	for (c = 0; c < n; c++)
	{
		_putchar(92);
		_putchar('\n');
		if (n > 1) {
			_putchar((n * ' ') + '0');
		}
	}
	_putchar('\n');
}
