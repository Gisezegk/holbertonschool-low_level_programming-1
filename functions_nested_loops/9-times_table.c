#include"main.h"
#include<stdio.h>

/**
* jack_bauer - is positive or no.
* Return: 0
*/


void times_table(void)
{
	int n = 0;
	int nd = 0;
	int k = 0;

	for (n = 0; n <= 9; n++ ) 
	{
		for (nd = 0; nd <= 9; nd++) {

			k = n * nd;

			if ( k > 9) {
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			}
			else if (nd != 0)
			{
			_putchar(' ');
			_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((k % 10) + '0');	
			}
			if (nd != 9){
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

