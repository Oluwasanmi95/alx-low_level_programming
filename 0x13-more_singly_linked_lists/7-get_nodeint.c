#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at index provided
 * @head: first node of the list
 * @index: node which data is to be retrieved
 *
 * Return: poiter to index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while ((temp != NULL) && (i < index))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
