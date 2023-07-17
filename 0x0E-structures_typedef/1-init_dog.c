#include "dog.h"
#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer dog
 * @name: name of a dog
 * @age: the age of a dog
 * @owner: the owner of a dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
