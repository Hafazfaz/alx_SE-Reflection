#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to append to dest
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}
