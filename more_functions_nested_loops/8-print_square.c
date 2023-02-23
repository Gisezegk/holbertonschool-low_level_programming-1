#include "main.h"
/**
* print_diagonal - prints the alphabet.
*
* @n: variable
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
