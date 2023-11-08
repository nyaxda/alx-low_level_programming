#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * void print_name(char *name, void (*f)(char *)); -  prints a name.
 *
 * Description: function that  prints a name
 *
 * @name: name to print
 * @f: function pointer
 *
 * Return:  void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
