#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int updates value it points to to 98.
 *
 * Description: function that uses pointer to change value of int to 98.
 *
 * Return: void
 */
void reset_to_98(int *n)
{
    int n;
    int *p = &n;

    *p = 98;
}
