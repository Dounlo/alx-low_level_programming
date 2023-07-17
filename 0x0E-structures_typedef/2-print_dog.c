#include "dog.h"
#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_dog - prints dog informations
 * @d: a structure of a dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

