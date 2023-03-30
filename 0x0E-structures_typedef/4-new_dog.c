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
 * *copy_string - copies the string pointed to by fro
 * to the buffer pointed by to
 * @to:Pointer to which the string is copied
 * @fro: pointer to the string to be copied
 * Return: the pointer to dest
*/
char *copy_string(char *to, char *fro)
{
int i;
int length;
length = 0;
while (fro[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
to[i] = fro[i];
}
to[i] = '\0';
return (to);
}
/**
 * new_dog - Creates a new copy of a string
 * @name: The pointer to the dogs name
 * @age: The pointer to the dogs age
 * @owner: The pointer to the owner of the dog
 * Return: Pointer to the structure new_dog, NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr_dog;
int length1, length2;

length1 = len_string(name);
length2 = len_string(owner);

ptr_dog = malloc(sizeof(dog_t));
if (ptr_dog == NULL)
	return (NULL);
ptr_dog->name = malloc(sizeof(char) * (length1 + 1));
if (ptr_dog->name == NULL)
{
	free(ptr_dog);
		return (NULL);
	}
ptr_dog->owner = malloc(sizeof(char) * (length2 + 1));
if (ptr_dog->owner == NULL)
{
	free(ptr_dog);
	free(ptr_dog->name);
	return (NULL);
}
copy_string(ptr_dog->name, name);
copy_string(ptr_dog->owner, owner);
ptr_dog->age = age;
return (ptr_dog);
}
