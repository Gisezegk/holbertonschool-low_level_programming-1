#include"main.h"

/**
* _abs - is positive or no.
* @n: variable for number
* Return: 0
*/

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar('0' + n);
		return (n);
	}
}
