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

printf("Size of char: %lu\n", sizeof (char));
printf("Size of int: %lu\n", sizeof (int));
printf("Size of long int: %lu\n", sizeof (long int));
printf("Size of long long int: %lu\n", sizeof (long long int));
printf("Size of float: %lu\n", sizeof (float));
return (0);
}
