#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"


int
sum_them_all(const unsigned int n, ...)
{
	unsigned int i, z;

	va_list list;

	va_start(list, n);

	z = 0;

	for (i = 0; i < n; i++)
	{
		z += va_arg(list, int);
	}
	va_end(list);
	return (z);

}
