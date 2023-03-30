#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for the dog structure
 * @d: The strture to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
	return;
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
