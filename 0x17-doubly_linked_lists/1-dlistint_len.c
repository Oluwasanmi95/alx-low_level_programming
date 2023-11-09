#include "lists.h"

/**
 * dlistint_len - prints doubly linked list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
