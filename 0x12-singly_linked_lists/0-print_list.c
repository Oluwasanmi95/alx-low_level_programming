#include "lists.h"

/**
 * print_list - prints singly linked lists
 * @h: head node of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t n = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		n++;
	}
	return (n);
}

