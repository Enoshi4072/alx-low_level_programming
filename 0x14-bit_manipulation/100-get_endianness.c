#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
        unsigned int i = 1;
        char *ptr_to_endian = (char *)&i;
        char val_endian = *ptr_to_endian;

        return ((val_endian == 1) ? 1 : 0);
}
