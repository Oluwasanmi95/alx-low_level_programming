#include "lists.h"
/**
 * sum_dlistint - sums data of all nodes
 * @head: first node of list
 *
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
