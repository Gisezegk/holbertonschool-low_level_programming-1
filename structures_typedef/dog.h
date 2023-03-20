#ifndef task
#define task

/**
 * struct dog - struct with info
 * @name: name of user
 * @age: age of user
 * @owner: owner
 *
 */



typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
