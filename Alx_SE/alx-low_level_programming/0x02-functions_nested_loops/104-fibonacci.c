#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    unsigned int fib1_low = 1, fib1_high = 0;
    unsigned int fib2_low = 2, fib2_high = 0;
    unsigned int next_low, next_high;
    unsigned int overflow;

    printf("%u, %u", fib1_low, fib2_low);

    for (count = 2; count < 98; count++)
    {
        /* Calculate next Fibonacci number */
        overflow = (fib1_low + fib2_low) / 1000000000;
        next_low = (fib1_low + fib2_low) % 1000000000;
        next_high = fib1_high + fib2_high + overflow;

        /* Print the number */
        printf(", ");
        if (next_high > 0)
            printf("%u%09u", next_high, next_low);
        else
            printf("%u", next_low);

        /* Update sequence */
        fib1_high = fib2_high;
        fib1_low = fib2_low;
        fib2_high = next_high;
        fib2_low = next_low;
    }

    printf("\n");
    return (0);
}
