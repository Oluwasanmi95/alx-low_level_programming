#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: pointer to the firat node
 * @n: integer data to fill node
 *
 * Return: pointer to newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *inter_link = (listint_t *) malloc(sizeof(listint_t));
	listint_t *facilitator;

	if (inter_link == NULL)
	{
		return (NULL);
	}

	inter_link->n = n;

	if (*head == NULL)
	{
		inter_link->next = *head;
		*head = inter_link;
		return (*head);
	}
	facilitator  = *head;
	if (facilitator->next == NULL)
	{
		facilitator->next = inter_link;
		inter_link->next = NULL;
	}
	else
	{
		while (facilitator->next != NULL)
			facilitator = facilitator->next;
		facilitator->next = inter_link;
		inter_link->next = NULL;
	}
	return (inter_link);
}
