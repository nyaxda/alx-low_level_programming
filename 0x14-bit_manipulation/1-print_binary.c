#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be converted into a binary
 * Return: binary number.
*/
void print_binary(unsigned long int n)
{
    unsigned long int operand = 1UL << 63, i;
    for (i = 0; i < 64; i++)
    {
        if (n & operand)
            _putchar('1');
        else
            _putchar('0');
        operand = operand >> 1;
    }
    _putchar('\n');
}
