#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array - set
* @a: var cjari
* @n: var
* Return: always the size
*/

void print_array(int *a, int n)
{
	int c = 0;

	while (c <= n - 1)
	{
			printf("%d", a[c]);
			if (c < n - 1)
			{
			 putchar(',');
			 putchar(' ');
			}
			else  
			{
			}
			c++;
	}
	putchar('\n');
}
