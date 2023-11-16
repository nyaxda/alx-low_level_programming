#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
}
struct node *head = NULL;
struct node *current = NULL;

size_t print_list(const list_t *h);

#endif