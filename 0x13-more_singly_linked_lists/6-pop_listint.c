#include "lists.h"

/**
 * pop_listint - removes the first node in link
 * @head: first node in link
 *
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	temp->next = NULL;
	free(temp);

	return (n);
}
