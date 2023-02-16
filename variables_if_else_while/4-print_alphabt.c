#include<stdio.h>

/**
* main - abc
* Return: always 0
*/

int main(void)
{
	char abc = 'a';
	int q = 'q';
	int e = 'e';

	for (abc = 'a'; abc <= 'z'; abc++)
	if (abc != q && abc != e)
	{
	putchar(abc);
	}
putchar('\n');
	return (0);
}
