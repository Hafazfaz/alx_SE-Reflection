#include "main.h"

/**
 * _strncat - concatenates two strings with a byte limit
 * @dest: the destination string
 * @src: the source string to append to dest
 * @n: the maximum number of bytes to append from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}
