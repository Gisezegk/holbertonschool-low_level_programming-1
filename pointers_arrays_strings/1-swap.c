#include "main.h"
#include <stdio.h>

/**
* swap_int - set
* @*a: var a
* @*b: var b
* @a: var dos
* @b: var b
*
*/

void swap_int(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}
