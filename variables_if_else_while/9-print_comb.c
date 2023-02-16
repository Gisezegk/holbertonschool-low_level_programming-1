#include<stdio.h>

/**
* main - 123
* Return: always 0
*/


int main(void)
{
	int abc = 0;
char com = ',';
char spc = ' ';
	for (abc = 0; abc <= 9; abc++)
	{
	putchar(abc + '0');
	if (abc != 9)
	{
	putchar(com);
	putchar(spc);
	}
	}
	putchar('\n');
	return (0);
}
