#include "main.h"
/**
* print_most_numbers - prints the alphabet.
*
*/

void print_most_numbers(void)
{
	int abc = 0;

	
		for (abc = '0'; abc <= '9'; abc++)
		{
			if (abc !=  2 && abc != 4)
				{
				_putchar(abc);
				}
	
			else
			{
			}
		}
	_putchar('\n');
	
}
