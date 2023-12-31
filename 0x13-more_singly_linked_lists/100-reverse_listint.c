#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: first node of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}

	*head = prev;
	return (*head);
}
