#include "lists.h"

/**
 * free_dlistint - frees nodes in linked list
 * @head: first node in list
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
