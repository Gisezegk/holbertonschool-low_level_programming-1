#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{

	dog_t *new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(strlen(name) * sizeof(char));
	if(new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(strlen(owner) * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->owner, owner);
	strcpy(new->name, name);

	new->age = age;

	return (new);
}
