#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node list_t;
list_t *head;
list_t *current;

size_t print_list(const list_t *h);

#endif