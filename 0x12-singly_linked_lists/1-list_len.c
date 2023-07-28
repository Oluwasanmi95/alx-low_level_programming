#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of nodes
 * @h: head node of list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t n = 0;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}
