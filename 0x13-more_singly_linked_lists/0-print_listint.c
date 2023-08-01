#include "lists.h"

/**
 * print_listint - prints singly linked lists
 * @h: first node of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t n = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		n++;
	}
	return (n);
}

