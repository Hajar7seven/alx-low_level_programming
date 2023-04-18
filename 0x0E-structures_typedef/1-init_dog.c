#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var of type struct dog
 *
 * @d: pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner's dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
