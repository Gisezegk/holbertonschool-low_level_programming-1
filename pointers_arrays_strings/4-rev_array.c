#include "main.h"

/**
* reverse_array - set
* @a: var cjari
* @n: max
* Return: always the size
*/

void reverse_array(int *a, int n)
{
	int aux = 0, i;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
