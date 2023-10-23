#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 *
 * Description: function that sets the value of a pointer to a char.
 *
 *@s: pointer to a pointer
 *@to: pointer to a char
 *
 * Return:  pointer to the string.
 *
 */
void set_string(char **s, char *to)
{
        *s = to;
}