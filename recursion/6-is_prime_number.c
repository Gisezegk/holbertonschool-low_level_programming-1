#include "main.h"

int
buscar(int a, int b)
{
	if (a % b == 0 && a > b)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
		return (buscar(a, b + 1));
}

int
is_prime_number(int n)
{
	int r = 0;

	if (n <= 1)
	{
		return(0);
	}
	else if (n > 1)
	{
		r = buscar(n, 2);
			return(r);
	}
}
