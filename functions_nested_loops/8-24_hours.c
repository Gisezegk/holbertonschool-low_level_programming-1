#include"main.h"
#include<stdio.h>

/**
* jack_bauer - is positive or no.
* @hor, min: variable for number
* Return: 0
*/


void jack_bauer(void)
{
	int hor, min;

	while (hor < 24)
	{
	hor = '0';
	hor++;

		while (min < 60)
		{
		min = '0';
		min++;

		_putchar((hor / 10) + '0');
		_putchar((hor % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min / 10) + '0');
		}
	}
}
