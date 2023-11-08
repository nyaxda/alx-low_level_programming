#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func -  returns a pointer to the function that corresponds
 * to the operator given as a parameter.
 *
 * Description: function that returns a pointer to the function that corresponds
 * to the operator given as a parameter.
 *
 * @s : operator passed as argument to the program
 * 
 * Return:  NULL if s does not match any operator
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add}, /*op_add function*/
        {"-", op_sub}, /*op_sub function*/
        {"*", op_mul}, /*op_mul function*/
        {"/", op_div}, /*op_div function*/
        {"%", op_mod}, /*op_mod function*/
        {NULL, NULL} /*NULL*/
    };
    int i;

    i = 0;
    while (ops[i].op != NULL)
    {
        if (strcmp(ops[i].op, s) == 0)
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
