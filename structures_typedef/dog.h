#ifndef DOH_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Description of the dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
typedef struct dog dog;
dog *new_dog(char *name, float age, char *owner);
void init dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
