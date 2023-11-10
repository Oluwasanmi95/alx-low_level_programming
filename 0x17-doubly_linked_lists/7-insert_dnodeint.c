#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: first node of list
 * @idx: index of new node
 * @n: data of new node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	int i = 0, point = idx - 1;

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *h;
	while (temp && temp->next && idx > 0)
	{
		if (i == point)
		{
			temp->next->prev = new;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			break;
		}
		temp = temp->next;
		i++;
		idx--;
	}

	if (temp == NULL || temp->next == NULL)
		return (NULL);
	return (new);
}
