#include<stdio.h>

/**
* main - aBC
* Return: always 0
*/

int main(void)
{
	char abc = 'a';
	char ABC = '0';

	for (abc = '0'; abc <= '9'; abc++)
	putchar(abc);
for (ABC = 'a'; ABC <= 'f'; ABC++)
	putchar(ABC);

putchar('\n');

	return (0);
}
