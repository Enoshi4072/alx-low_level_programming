#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the strings of 0 and 1
 * Return: Converted number, else 0 if there is a string not 0 or 1, or
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int val_dec = 0;
        unsigned int size = 0;

        if (b == NULL)
                return (0);
        for (size = 0; b[size] != '\0'; size++)
        {
                if (b[size] != '0' && b[size] != '1')
                        return (0);
                val_dec = val_dec * 2 + (b[size] - '0');
        }
        return (val_dec);
}
