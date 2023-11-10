#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at index
 * @head: first node of list
 * @index: position of node to retrieve
 *
 * Return: address of index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (temp && index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return NULL;
	return (temp);
}

