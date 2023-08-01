#include "lists.h"

/**
 * sum_listint - sums the data in all nodes of list
 * @head: first node of list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
