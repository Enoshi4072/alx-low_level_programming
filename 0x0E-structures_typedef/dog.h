#ifndef DOG

#define DOG
/**
 *struct dog - short description of the dog structure
 *@name: - First member which is a pointer to the dog
 *@age: - Second member which is the age of the dog
 *@owner: - Third member which is a pointer to the owner of the dog
 *Description: Contains the data of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
