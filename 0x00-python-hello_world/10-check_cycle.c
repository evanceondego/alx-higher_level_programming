#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * printlistint - prints all elements of a listintt
 * @b: pointer to head
 * Return: nodes
 */
size_t printlistint(const listintt *b)
{
	const listintt *current;
	unsigned int a;

	current = b;
	a = 0;
	while (current != NULL)
	{
		printf("%i\n", current->a);
		current = current->next;
		a++;
	}

	return (n);
}
/**
 * addnodeint - adds a new node
 * @head -pointer of the start of the list
 * @a: integer to be given a node
 * Return: address or NULL
 */
listintt *addnodeint(listintt **head, const int a)
{
	listintt *new;

	new = malloc(sizeof(listintt));
	if (new == NULL)
		return (NULL);

	new->a = a;
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * freelistint - frees a listintt list
 * @head: pointer to list
 * Return: void
 */
void freelistint(listintt *head)
{
	listintt *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
