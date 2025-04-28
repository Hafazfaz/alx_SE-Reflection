#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The size of the multiplication table
 */
void print_times_table(int n)
{
    int row, col, product;

    if (n < 0 || n > 15)
        return;

    for (row = 0; row <= n; row++)
    {
        for (col = 0; col <= n; col++)
        {
            product = row * col;

            /* Print comma and spaces for all but first column */
            if (col != 0)
            {
                _putchar(',');
                _putchar(' ');

                /* Adjust spacing based on product size */
                if (product < 10)
                    _putchar(' '), _putchar(' ');
                else if (product < 100)
                    _putchar(' ');
            }

            /* Print the number */
            if (product >= 100)
                _putchar('0' + product / 100);
            if (product >= 10)
                _putchar('0' + (product / 10) % 10);
            _putchar('0' + product % 10);
        }
        _putchar('\n');
    }
}
