#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next;
    unsigned long sum = 0;

    while (fib1 <= 4000000)
    {
        /* Check if current term is even */
        if (fib1 % 2 == 0)
            sum += fib1;

        /* Generate next Fibonacci term */
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    printf("%lu\n", sum);
    return (0);
}
