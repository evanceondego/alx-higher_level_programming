#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listints - singly linked list
 * @a: integer
 * @next: points to the node
 *
 */

typedef struct listints
{
	int a;
	struct listints *next;
} listintt;

size_t printlistint(const listintt *h);
listintt *addnodeint(listintt **head, const int a);
void freelistint(listintt *head);
int checkcycle(listintt *list);
int checkcycle(listintt *list);

#endif
