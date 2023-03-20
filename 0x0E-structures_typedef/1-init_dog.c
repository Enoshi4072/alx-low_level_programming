#include "dog.h"
#include <stdlib.h>

/**
 * len_string - calculates the length of the string
 * @s: The string to be counted
 * Return: The string that has been counted
 */
int len_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * copy_string - Copies elements of one string to the next
 * @destination: The string to copy to;
 * @source: The string to copy from
 */
void copy_string(char *destination, char *source)
{
while (*source)
{
*destination = *source;
destination++;
source++;
}
*destination = '\0';
}
/**
 * init_dog - the function that initializes a structure
 * @d: The pointer to the structure
 * @name: The pointer to the name of the dog
 * @age: The pointer to the age of the dog
 * @owner: The pointer to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(len_string(name) + 1);
copy_string(d->name, name);
d->age = age;
d->owner = malloc(len_string(owner) + 1);
copy_string(d->owner, owner);
}
