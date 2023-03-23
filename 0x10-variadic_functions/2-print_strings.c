#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s_ptr;
va_list arguments;
va_start(arguments, n);

for (i = 0; i < n; i++)
{
s_ptr = va_arg(arguments, char *);
if (s_ptr == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s_ptr);
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arguments);
printf("\n");
}

