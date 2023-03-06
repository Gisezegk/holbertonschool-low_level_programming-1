#include "main.h"

int encontrar(int a, int b)
{
    if (a * a == b)
	 {
         return(a);
     }
     else if (a * a > b)
    {
         return(-1);
     }
     else
   {
         return (encontrar(a + 1, b));
   }
}

int
_sqrt_recursion(int n)
{
	int s;

	if (n < 0)
	{
		return (-1);
	}
	else 
	{
		s = encontrar(1, n);
	}
	return (s);
}
