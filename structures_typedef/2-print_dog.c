#include <stdio.h>
#include "dog.h"

void
print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{

	if (!(*d).name)
	{
		(*d).name = "(nil)";
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	if (!(*d).age)
	{
		(*d).age = 0;
		printf("Age: %f\n", (*d).age);
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}

	if (!(*d).owner)
	{
		(*d).owner = ("(nil)");
		printf("Owner: %s\n", (*d).owner);		
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
	
	}
}
