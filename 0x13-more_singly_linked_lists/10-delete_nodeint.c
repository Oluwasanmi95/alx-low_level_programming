#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: first node of list
 * @index: position to be deleted
 *
 * Return:1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		else
		{
			temp = *head;
			*head = (*head)->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
	}

	temp = *head;

	while ((temp != NULL) && (i < (index - 1)))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	del = temp->next;
	temp->next = temp->next->next;
	del->next = NULL;
	free(del);
	return (1);
}
