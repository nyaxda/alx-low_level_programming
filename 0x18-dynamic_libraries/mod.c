#include "python.h"

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division of a by b.
 * If b is 0, it prints an error message and returns -1.
 */
int mod(int a, int b)
{
   if (b == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (-1);
    }
    return (a % b);
}
