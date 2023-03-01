#include "main.h"
/**
 * _strncpy - The function copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}
