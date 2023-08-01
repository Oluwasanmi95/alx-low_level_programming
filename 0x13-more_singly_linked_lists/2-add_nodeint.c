#include "lists.h"

/**
 * add_nodeint - inserts node at the beginning
 * @head: pointer to the first node
 * @n: integer data for node
 *
 * Return: Returns pointer to struct variable listint_s
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *inter_link = (listint_t *) malloc(sizeof(listint_t));

	if (inter_link == NULL)
	{
		printf("***Error***");
		exit(1);
	}

	inter_link->n = n;
	inter_link->next = *head;
	*head = inter_link;
	return (*head);
}
