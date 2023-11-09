#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end
 * @head: head of linked list
 * @n: data of new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current)
	{
		if (current->next == NULL)
		{
			current->next = new;
			new->prev = current;
			break;
		}
		current = current->next;
	}
	return (new);
}
