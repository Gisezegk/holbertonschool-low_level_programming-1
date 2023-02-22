#include "main.h"
/**
* print_most_numbers - prints the alphabet.
*
*/

void print_most_numbers(void)
{
	int abc;

		for (abc = '0'; abc <= '9'; abc++)
		{
			if (abc != '2' && abc != '4')
				{
				_putchar(abc);
				}
		}
	_putchar('\n');
	
}
