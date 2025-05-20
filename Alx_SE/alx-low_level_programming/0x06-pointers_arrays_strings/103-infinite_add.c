#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0;
    int i = len1 - 1, j = len2 - 1, k = 0;
    int sum;

    if (max_len + 1 > size_r)
        return (0);

    r[max_len + 1] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = i >= 0 ? n1[i--] - '0' : 0;
        int digit2 = j >= 0 ? n2[j--] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k++] = (sum % 10) + '0';
    }

    if (k > size_r - 1)
        return (0);

    r[k] = '\0';

    /* Reverse the result string */
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}
