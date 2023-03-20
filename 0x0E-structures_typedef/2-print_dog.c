#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a the dog structure members
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
	printf("(nil)");
if (d->owner == NULL)
	printf("(nil)");
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
