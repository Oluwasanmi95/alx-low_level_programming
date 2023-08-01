#include "lists.h"

/**
 * listint_len -returns number of nodes
 * @h: first node of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t n = 0;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}
