#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>

struct node
{
    char *str;
    size_t len;
    struct node *next;
};
typedef struct node list_t;

size_t print_list(const list_t *h);

#endif