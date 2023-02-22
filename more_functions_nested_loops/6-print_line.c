#include "main.h"
/**
* print_line - prints the alphabet.
*
* @n: variable
*/

void print_line(int n)
{

	if (n != 0)
	{
		_putchar((n * '_') + '0');
	}
	else
	{
		_putchar('\n');
	}
}
