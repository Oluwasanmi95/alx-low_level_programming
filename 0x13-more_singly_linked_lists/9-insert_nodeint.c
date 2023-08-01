#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: first node of list
 * @idx: position new node will be inserted
 * @n: data of new node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while ((temp != NULL) && (i < (idx - 1)))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
