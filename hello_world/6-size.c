#include<stdio.h>
/**
 * main - Print a strin using puts
 * Return: always 0
 */
int main(void)
{
char gise[] = "\"Programming is like building a multilingual puzzle";
puts(gise);
return (0);
}
New


Gise Nieves
  3:59 PM
File Edit Options Buffers Tools C Help
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
printf("Size of char: %lu\n byte(s)\n", sizeof (char));
printf("Size of int: %lu\n byte(s)\n", sizeof (int));
printf("Size of long int: %lu\n byte(s)\n", sizeof (long int));
printf("Size of long long int: %lu\n byte(s)\n", sizeof (long long int));
printf("Size of float: %lu\n byte(s)\n", sizeof (float));
return (0);
}
