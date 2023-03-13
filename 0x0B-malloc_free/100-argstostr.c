#include <stdlib.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char *argstostr(int ac, char **av)
{
int i;
int j;
int k;
int size_str;
char *result;
if (ac == 0 || av == NULL)
{
return (NULL);
}
size_str = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; (av[i][j]); j++)
{
size_str++;
}
size_str++;
}
result = (char *) malloc(sizeof(char) * (size_str + 1));
if (result == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; (av[i][j] != '\0'); j++)
{
result[k] = av[i][j];
k++;
}
result[k] = '\n';
k++;
}
result[k] = '\0';
return (result);
}
