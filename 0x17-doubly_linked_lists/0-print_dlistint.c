#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
