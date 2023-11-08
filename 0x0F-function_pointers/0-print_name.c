#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * void print_name(char *name, void (*f)(char *)); -  prints a name.
 *
 * Description: function that  prints a name
 *
 * @name: string to print
 * @f: function pointer
 *
 * Return:  void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
