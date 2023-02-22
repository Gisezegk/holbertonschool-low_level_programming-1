#include "main.h"
/**
* more_numbers - prints the alphabet.
*
*/

void more_numbers(void)
{
	int f;
	int xd;

	for (f = 0; f <= 9; f++)
	{
		for (xd = 0; xd <= 14; xd++)
		{
			if (xd >= 10)
			{
				_putchar((xd / 10) + '0');
				_putchar((xd % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
