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

	while (c < n)
	{
		printf("%d, ", a[c]);
		c++;
	}
	
	if (c == n)
		{
                        printf("%d", a[c]);
		}
	putchar('\n');
}