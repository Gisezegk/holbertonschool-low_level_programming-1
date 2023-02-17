#include"main.h"
#include<stdio.h>

/**
* jack_bauer - is positive or no.
* Return: 0
*/


void jack_bauer(void)
{
	int hor = 0;
	int min = 0;

	while (hor != 24)
	{

		for (min = 0; min != 60; min++)
		{

		_putchar((hor / 10) + '0');
		_putchar((hor % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		}

		hor++;
	}
}
