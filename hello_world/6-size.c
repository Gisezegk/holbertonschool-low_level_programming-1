#include<stdio.h>

/**
 * main - compiled
 * Return: always 0
 */

int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %lu\n byte(s)", sizeof (char));
printf("Size of int: %lu\n byte(s)", sizeof (int));
printf("Size of long int: %lu\n byte(s)", sizeof (long int));
printf("Size of long long int: %lu\n byte(s)", sizeof (long long int));
printf("Size of float: %lu\n byte(s)", sizeof (float));
return (0);
}
