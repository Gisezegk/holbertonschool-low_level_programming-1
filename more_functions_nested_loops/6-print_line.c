#include "main.h"
/**
* print_line - prints the alphabet.
*
* @n: variable
*/

void print_line(int n)
{
	int c;

	if (n != 0)
	{
		c = n * 95;
		_putchar(c);
	}
	else
	{
		_putchar('\n');
	}
}
